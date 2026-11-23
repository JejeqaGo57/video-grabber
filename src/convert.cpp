// convert.cpp — part of video-grabber.

#include "videograbber/convert.h"

#include <cstdio>

namespace videograbber {

Convert::Convert(const std::string& config_path)
    : config_path_(config_path) {}

void Convert::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Convert::run() {
    if (verbose_) std::fprintf(stderr, "[video-grabber] convert: run\n");
    // core logic lives here
    return true;
}

}  // namespace videograbber
