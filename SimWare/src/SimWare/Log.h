#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace SimWare {

    class SIMWARE_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Core logs
#ifndef NDEBUG
#define SW_CORE_TRACE(...)  ::SimWare::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SW_CORE_INFO(...)   ::SimWare::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SW_CORE_WARN(...)   ::SimWare::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SW_CORE_ERROR(...)  ::SimWare::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SW_CORE_fatal(...)  ::SimWare::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logs
#define SW_TRACE(...)       ::SimWare::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SW_INFO(...)        ::SimWare::Log::GetClientLogger()->info(__VA_ARGS__)
#define SW_WARN(...)        ::SimWare::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SW_ERROR(...)       ::SimWare::Log::GetClientLogger()->error(__VA_ARGS__)
#define SW_fatal(...)       ::SimWare::Log::GetClientLogger()->fatal(__VA_ARGS__)
#else
#define SW_CORE_TRACE(...)
#define SW_CORE_INFO(...)
#define SW_CORE_WARN(...)
#define SW_CORE_ERROR(...)
#define SW_CORE_fatal(...)

// Client logs
#define SW_TRACE(...)
#define SW_INFO(...)
#define SW_WARN(...)
#define SW_ERROR(...)
#define SW_fatal(...)
#endif