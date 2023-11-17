cmake_minimum_required(VERSION 3.18)

## project name and language
project(SimWare LANGUAGES CXX)

## C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# project defined variables
set(ENGINE_DIR ${PROJECT_SOURCE_DIR}/SimWare)
set(APP_DIR ${PROJECT_SOURCE_DIR}/Sandbox)

set(ENGINE_SRC_DIR ${ENGINE_DIR}/src)
set(APP_SRC_DIR ${APP_DIR}/src)

## engine
add_subdirectory(SimWare)

## app
add_subdirectory(Sandbox)