from conans import ConanFile, CMake

script = """#!/bin/bash

# This file is auto-generted by antlr4conanexample/conanfile.py by conan install ..

export ANTLR_HOME="~/.local/bin"
export ANTLR_JAR="$ANTLR_HOME/antlr-VERSION-complete.jar"
export CLASSPATH=".:$ANTLR_JAR:$CLASSPATH"
alias antlr4="java -jar $ANTLR_JAR"
alias grun="java org.antlr.v4.gui.TestRig"

cd ~/.local/bin && [ ! -f "antlr-VERSION-complete.jar" ] && wget https://www.antlr.org/download/antlr-VERSION-complete.jar
cd -

antlr4 -o Parser -no-listener -no-visitor -Dlanguage=Cpp Gram.g4
"""

class AntLR4Example(ConanFile):
    settings = "os", "compiler", "build_type", "arch", "cppstd"
    requires = ["cmake/3.21.3"]
    license = "MIT"
    author = "Michal Widera"
    description = "ANTLR4 example"
    homepage = "https://github.com/michalwidera/Antlr4ConanExample"
    generators = "cmake" , "cmake_find_package"
    testing = []

    options = {
        "antlr4" : ["4.9.3","4.10","4.10.1"]
    }

    default_options = {
        "antlr4": "4.10.1"
    }

    def configure(self):
        self.settings.compiler.cppstd = 20
        self.settings.compiler.libcxx = "libstdc++11"

    def requirements(self):
        antlr4_version_file = open("../Src/regenerate_parser.sh","w")
        antlr4_version_file.write(script.replace('VERSION',str(self.options.antlr4)))
        antlr4_version_file.close()

        self.requires("antlr4-cppruntime/"+str(self.options.antlr4))

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        cmake.install()
