# ANTLR4ConanExample

This is Example of ANTLR4-cppruntime usage.
Please note that usage of Conan Package manager solves dependency issues in different build environments.

[![CircleCI](https://dl.circleci.com/status-badge/img/gh/michalwidera/Antlr4ConanExample/tree/main.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/michalwidera/Antlr4ConanExample/tree/main)

> **_NOTE:_** In case of Conan package manager you do not need download and build manually ANTLR4 source or binary packages! You can pick dependency in conanfile.py and hit conan install command. Conan already did it for you! All binary packages are here and you can check if your platform is already supported by given system here: https://conan.io/center/antlr4-cppruntime


Here is code snippets that build working parser on your platform.

## Build example ANTLR4 parser in C++ type:

(assuming Gcc (or Similar) toolchain is already installed.)

If you are using first time conan please first use:
~~~
pip install conan
conan profile new default --detect
~~~

Then:
~~~
git clone https://github.com/michalwidera/Antlr4ConanExample
cd Antlr4ConanExample
mkdir build
cd build
conan install .. -o antlr4=4.11.1
conan build ..
a4test
~~~

If you want to change used Antlr4 version - just use: '-o antlr4=4.9.3' or '-o antlr4= 4.10.1' as you need.

## Regenerate grammar form .g4 file

DO NOT FORGET INSTALL JAVA-JRE.
Antl4 is written in Java Language, you need Java Runtime Environment to run Antlr4 on your machine.
Check .circleci scripts to get more info if needed.

~~~
sudo apt install default-jre
cd Antlr4ConanExample/Src
source regenerate_parser.sh
cd ../build
conan build ..
a4test
~~~
