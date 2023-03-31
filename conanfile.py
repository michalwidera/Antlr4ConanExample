from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout

script = """#!/bin/bash

# This file is auto-generted by antlr4conanexample/conanfile.py by conan install ..

export ANTLR_HOME="~/.local/bin"
export ANTLR_JAR="$ANTLR_HOME/antlr-VERSION-complete.jar"
export CLASSPATH=".:$ANTLR_JAR:$CLASSPATH"
alias antlr4="java -jar $ANTLR_JAR"
alias grun="java org.antlr.v4.gui.TestRig"

cd ~/.local/bin && [ ! -f "antlr-VERSION-complete.jar" ] && wget https://www.antlr.org/download/antlr-VERSION-complete.jar
cd -

java -jar ~/.local/bin/antlr-VERSION-complete.jar -o Parser -no-listener -no-visitor -Dlanguage=Cpp Gram.g4
"""

class AntLR4Example(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    license = "MIT"
    author = "Michal Widera"
    description = "ANTLR4 example"
    homepage = "https://github.com/michalwidera/Antlr4ConanExample"
    generators = "CMakeDeps" , "CMakeToolchain"
    antlr4_version = "4.12.0"
    testing = []
    requires = "antlr4-cppruntime/"+antlr4_version

    def layout(self):
        cmake_layout(self)

    def package_info(self):
        self.cpp_info.system_libs = ["dl", "rt", "pthread"]

    def requirements(self):
        antlr4_version_file = open("src/regenerate_parser.sh","w")
        antlr4_version_file.write(script.replace('VERSION',self.antlr4_version))
        antlr4_version_file.close()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
