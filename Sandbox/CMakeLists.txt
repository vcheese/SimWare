

add_executable(Sandbox ${APP_SRC_DIR}/SandboxApp.cpp)

target_include_directories(Sandbox PUBLIC ${ENGINE_SRC_DIR})
target_link_libraries(Sandbox PUBLIC ${PROJECT_NAME})