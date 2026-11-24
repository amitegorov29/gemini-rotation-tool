// main.cpp — entry point. Wires config and subsystems together.

#include "geminirotationtool/settings.h"
#include "geminirotationtool/keys.h"
#include "geminirotationtool/projects.h"
#include "geminirotationtool/rotate.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    geminirotationtool::Settings settings = geminirotationtool::Settings::load_default();
    geminirotationtool::Keys keys(settings.store_path);
    geminirotationtool::Projects projects(settings.store_path);
    geminirotationtool::Rotate rotate(settings.store_path);
    std::fprintf(stderr, "[gemini-rotation-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
