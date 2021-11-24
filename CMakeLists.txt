cmake_minimum_required(VERSION 3.3 FATAL_ERROR )

project (antlr4conanexample)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup()

set(SOURCES_STAGE
    Src/main.cpp
    Src/Parser/GramLexer.cpp
    Src/Parser/GramParser.cpp
    )

add_executable( a4test ${SOURCES_STAGE} )

target_link_libraries( a4test ${CONAN_LIBS} )

set_target_properties(a4test PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

install(TARGETS a4test DESTINATION ~/.local/bin)
