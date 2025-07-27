#pragma once

#include <Windows.h>

#include <filesystem>
#include <optional>
#include <regex>
#include <fstream>
#include <thread>
#include <atomic>

namespace FsCleaner {
    void __RemoveTraces();
    void __ReInstall();
}