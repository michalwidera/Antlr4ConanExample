#!/bin/bash

antlr4 -o Parser -no-listener -no-visitor -Dlanguage=Cpp Gram.g4
