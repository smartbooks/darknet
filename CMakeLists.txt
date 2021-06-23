cmake_minimum_required(VERSION 3.17)

project(darknet C)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_FLAGS "-DOPENCV -pthread" )

set(CMAKE_C_STANDARD 11)

list(APPEND CMAKE_PREFIX_PATH /usr/local/opt/opencv@2/share/OpenCV)

message("CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH}")

FIND_PACKAGE(OpenCV REQUIRED)

include_directories(examples src include)

aux_source_directory(src src)

aux_source_directory(examples examples)

add_executable(darknet ${src} ${examples})

TARGET_LINK_LIBRARIES(darknet ${OpenCV_LIBS} pthread)

