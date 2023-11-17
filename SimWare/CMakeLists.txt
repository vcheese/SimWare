
set(SRC_LIST
src/SimWare/Events/Event.h
src/SimWare/Events/ApplicationEvent.h
src/SimWare/Events/KeyEvent.h
src/SimWare/Events/MouseEvent.h
src/SimWare/Core.h
src/SimWare/EntryPoint.h
src/SimWare/Application.h
src/SimWare/Application.cpp
src/SimWare/Log.h
src/SimWare/Log.cpp
src/SimWare.h
)

add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_LIST})

set(VENDOR_DIR ${ENGINE_DIR}/vendor)
set(SPDLOG_DIR ${VENDOR_DIR}/spdlog)

target_include_directories(${PROJECT_NAME} PRIVATE 
${ENGINE_SRC_DIR}
)

target_include_directories(${PROJECT_NAME} PUBLIC
${SPDLOG_DIR}/include
)

target_compile_definitions(${PROJECT_NAME} PRIVATE SW_BUILD_DLL)

if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE SW_PLATFORM_WINDOWS)
endif()