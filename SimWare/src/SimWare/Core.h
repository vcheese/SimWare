#pragma once

/*-----*/ #define SW_PLATFORM_WINDOWS // for now.
/*-----*/ #define SW_BUILD_DLL // for now.

#ifdef SW_PLATFORM_WINDOWS
    #ifdef SW_BUILD_DLL
        #define SIMWARE_API __declspec(dllexport)
    #else
        #define SIMWARE_API __declspec(dllimport)
    #endif
#else
    #define SIMWARE_API
    //#error SimWare only support Windows!
#endif
