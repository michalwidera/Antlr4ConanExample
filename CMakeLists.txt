cmake_minimum_required(VERSION 3.5 FATAL_ERROR )

project (a4test)

find_package(antlr4-runtime REQUIRED)
find_package(antlr4 REQUIRED)

if(DEFINED antlr4_PACKAGE_FOLDER_DEBUG)
  set(antlr4Path ${antlr4_PACKAGE_FOLDER_DEBUG})
else()
  set(antlr4Path ${antlr4_PACKAGE_FOLDER_RELEASE})
endif()

if(DEFINED openjdk_BIN_DIRS_DEBUG)
  set(javaPath ${openjdk_BIN_DIRS_DEBUG})
else()
  set(javaPath ${openjdk_BIN_DIRS_RELEASE})
endif()

include_directories(
  ${antlr4-runtime_INCLUDE_DIR}
  src/Parser
)

set(SOURCES_STAGE
    src/main.cpp
    src/Parser/GramLexer.cpp
    src/Parser/GramParser.cpp
    )


message(STATUS "CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")
message(STATUS "antlr4Path: ${antlr4Path}")
message(STATUS "javaPath: ${javaPath}")

add_executable(${PROJECT_NAME} ${SOURCES_STAGE} )

add_custom_target(
  grammar
  COMMAND
    ${javaPath}/java -classpath ${antlr4Path}/res/antlr-complete.jar
    org.antlr.v4.Tool -o ${PROJECT_SOURCE_DIR}/src/Parser -lib ${PROJECT_SOURCE_DIR}/src/Parser -encoding UTF-8
    -Dlanguage=Cpp -no-listener -no-visitor Gram.g4
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/src
  SOURCES ${PROJECT_SOURCE_DIR}/src/Gram.g4)

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS} antlr4_static -pthread )

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

install(TARGETS ${PROJECT_NAME} DESTINATION ~/.local/bin)
