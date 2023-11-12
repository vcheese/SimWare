

add_executable(Sandbox ${APP_SRC_DIR}/SandboxApp.cpp)

target_include_directories(Sandbox PUBLIC ${ENGINE_SRC_DIR})
target_link_libraries(Sandbox PUBLIC ${PROJECT_NAME})

if (WIN32)
	target_compile_definitions(Sandbox PRIVATE SW_PLATFORM_WINDOWS)
endif()

add_custom_command(TARGET Sandbox POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${PROJECT_NAME}>
        $<TARGET_FILE_DIR:Sandbox>)