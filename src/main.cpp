// main.cpp — entry point. Wires config and subsystems together.

#include "videograbber/settings.h"
#include "videograbber/grabber.h"
#include "videograbber/sites.h"
#include "videograbber/convert.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    videograbber::Settings settings = videograbber::Settings::load_default();
    videograbber::Grabber grabber(settings.store_path);
    videograbber::Sites sites(settings.store_path);
    videograbber::Convert convert(settings.store_path);
    std::fprintf(stderr, "[video-grabber] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
