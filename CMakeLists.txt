cmake_minimum_required(VERSION 3.3 FATAL_ERROR )

project (antlr4conanexample)

find_package(antlr4-runtime REQUIRED)

include_directories(
  ${antlr4-runtime_INCLUDE_DIR}
  src/Parser
)

set(SOURCES_STAGE
    src/main.cpp
    src/Parser/GramLexer.cpp
    src/Parser/GramParser.cpp
    )

add_executable( a4test ${SOURCES_STAGE} )

add_custom_target(
  grammar
  COMMAND ${CMAKE_SOURCE_DIR}/src/regenerate_parser.sh Gram.g4
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/src
  SOURCES ${PROJECT_SOURCE_DIR}/src/Gram.g4)

target_link_libraries( a4test ${CONAN_LIBS} ${antlr4-runtime_LIBRARIES} -pthread )

set_target_properties(a4test PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

install(TARGETS a4test DESTINATION ~/.local/bin)
