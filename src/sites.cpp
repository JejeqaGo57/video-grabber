// sites.cpp — part of video-grabber.

#include "videograbber/sites.h"

#include <cstdio>

namespace videograbber {

Sites::Sites(const std::string& config_path)
    : config_path_(config_path) {}

void Sites::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Sites::run() {
    if (verbose_) std::fprintf(stderr, "[video-grabber] sites: run\n");
    // core logic lives here
    return true;
}

}  // namespace videograbber
