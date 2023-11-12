#pragma once

#ifdef SW_PLATFORM_WINDOWS
    #ifdef SW_BUILD_DLL
        #define SIMWARE_API __declspec(dllexport)
    #else
        #define SIMWARE_API __declspec(dllimport)
    #endif
#else
    #error SimWare only supports Windows!
#endif
