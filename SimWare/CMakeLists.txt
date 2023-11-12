
add_library(${PROJECT_NAME} SHARED 
${ENGINE_SRC_DIR}/SimWare/Core.h
${ENGINE_SRC_DIR}/SimWare/EntryPoint.h
${ENGINE_SRC_DIR}/SimWare/Application.h
${ENGINE_SRC_DIR}/SimWare/Application.cpp
${ENGINE_SRC_DIR}/SimWare/Log.h
${ENGINE_SRC_DIR}/SimWare/Log.cpp
)

set(VENDOR_DIR ${ENGINE_DIR}/vendor)
set(SPDLOG_DIR ${VENDOR_DIR}/spdlog)

target_include_directories(${PROJECT_NAME} PUBLIC ${SPDLOG_DIR}/include)
target_compile_definitions(${PROJECT_NAME} PRIVATE SW_BUILD_DLL)

if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE SW_PLATFORM_WINDOWS)
endif()