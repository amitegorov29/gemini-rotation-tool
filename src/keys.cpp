// keys.cpp — part of gemini-rotation-tool.

#include "geminirotationtool/keys.h"

#include <cstdio>

namespace geminirotationtool {

Keys::Keys(const std::string& config_path)
    : config_path_(config_path) {}

void Keys::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Keys::run() {
    if (verbose_) std::fprintf(stderr, "[gemini-rotation-tool] keys: run\n");
    // core logic lives here
    return true;
}

}  // namespace geminirotationtool
