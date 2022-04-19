#!/bin/bash

# This file is auto-generted by antlr4conanexample/conanfile.py by conan install ..

export ANTLR_HOME="~/.local/bin"
export ANTLR_JAR="$ANTLR_HOME/antlr-4.10-complete.jar"
export CLASSPATH=".:$ANTLR_JAR:$CLASSPATH"
alias antlr4="java -jar $ANTLR_JAR"
alias grun="java org.antlr.v4.gui.TestRig"

cd ~/.local/bin && [ ! -f "antlr-4.10-complete.jar" ] && wget https://www.antlr.org/download/antlr-4.10-complete.jar
cd -

antlr4 -o Parser -no-listener -no-visitor -Dlanguage=Cpp Gram.g4
