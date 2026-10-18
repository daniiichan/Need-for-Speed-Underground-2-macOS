#include "util_env.h"

#include <array>
#include <vector>
#include <filesystem>
#include <unistd.h>
#include <limits.h>

#if defined(__APPLE__)
#include <mach-o/dyld.h>
#include <pthread.h>
#endif

namespace dxvk::env {

  std::string getExePath() {
#if defined(__APPLE__)
    uint32_t size = 0;
    _NSGetExecutablePath(nullptr, &size);
    std::vector<char> rawPath(size + 1, '\0');
    if (_NSGetExecutablePath(rawPath.data(), &size) == 0) {
      char real[PATH_MAX] = {};
      if (realpath(rawPath.data(), real))
        return std::string(real);
      return std::string(rawPath.data());
    }
    return "";
#else
    std::array<char, PATH_MAX> exePath = {};

    ssize_t count = readlink("/proc/self/exe", exePath.data(), exePath.size());
    if (count <= 0)
      return "";

    return std::string(exePath.begin(), exePath.begin() + count);
#endif
  }
  
  
  void setThreadName(const std::string& name) {
#if defined(__APPLE__)
    pthread_setname_np(name.c_str());
#endif
  }


  bool createDirectory(const std::string& path) {
    return std::filesystem::create_directories(path);
  }

}