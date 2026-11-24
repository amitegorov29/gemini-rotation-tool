// rotate.cpp — part of gemini-rotation-tool.

#include "geminirotationtool/rotate.h"

#include <cstdio>

namespace geminirotationtool {

Rotate::Rotate(const std::string& config_path)
    : config_path_(config_path) {}

void Rotate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Rotate::run() {
    if (verbose_) std::fprintf(stderr, "[gemini-rotation-tool] rotate: run\n");
    // core logic lives here
    return true;
}

}  // namespace geminirotationtool
