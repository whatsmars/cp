cmake_minimum_required(VERSION 3.17)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_C_STANDARD 11)

include_directories("include")
include_directories("tinycthread")

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} factorial/factorial.c)

    if (UNIX OR Linux)
        target_link_libraries(${name} pthread)
    endif ()

    target_compile_definitions(${name} PUBLIC DEBUG)
endforeach()

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/time/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/file_io/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/thread/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} tinycthread/tinycthread.c)

    if (UNIX OR Linux)
        target_link_libraries(${name} pthread)
    endif ()
endforeach()