// grabber.cpp — part of video-grabber.

#include "videograbber/grabber.h"

#include <cstdio>

namespace videograbber {

Grabber::Grabber(const std::string& config_path)
    : config_path_(config_path) {}

void Grabber::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Grabber::run() {
    if (verbose_) std::fprintf(stderr, "[video-grabber] grabber: run\n");
    // core logic lives here
    return true;
}

}  // namespace videograbber
