cmake_minimum_required(VERSION 3.16)
project(gemini-rotation-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(geminirotationtool
    src/main.cpp
    src/keys.cpp
    src/projects.cpp
    src/rotate.cpp
)

target_include_directories(geminirotationtool PRIVATE include)

if(WIN32)
    target_link_libraries(geminirotationtool PRIVATE userenv)
endif()
