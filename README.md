# ANTLR4ConanExample

This is Example of ANTLR4-cppruntime usage.
Please note that usage of Conan Package manager solves dependency issues in different build environments.

[![CircleCI](https://dl.circleci.com/status-badge/img/gh/michalwidera/Antlr4ConanExample/tree/main.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/michalwidera/Antlr4ConanExample/tree/main)

> **_NOTE:_** In case of Conan package manager you do not need download and build manually ANTLR4 source or binary packages! You can pick dependency in conanfile.py and hit conan install command. Conan already did it for you! All binary packages are here and you can check if your platform is already supported by given system here: https://conan.io/center/antlr4-cppruntime


Here is code snippets that build working parser on your platform.

## Build example ANTLR4 parser in C++ type:

(assuming gcc (or Similar) toolchain is already installed.)

If you are using first time conan please first use:
~~~
pip install conan
conan profile new default --detect
~~~
I'm using additional here: conan profile update settings.compiler.libcxx=libstdc++11 default

In case of conan 2.x plese use
~~~
conan profile detect
~~~
And modify this profile by editor if you need.

Then:
~~~
git clone https://github.com/michalwidera/Antlr4ConanExample
cd Antlr4ConanExample
mkdir build
conan install . -o antlr4=4.11.1
conan build .
a4test
~~~

If you want to change used Antlr4 version - just use modify conanfile.py file with:
~~~
requires = "antlr4-cppruntime/4.11.1"
~~~

## Regenerate grammar form .g4 file

DO NOT FORGET INSTALL JAVA-JRE.
Antl4 is written in Java Language, you need Java Runtime Environment to run Antlr4 on your machine.
Check .circleci scripts to get more info if needed.
This java compiler is only required when you need to compile .g4 file.
Otherwise cpp-toll chain and generated code from Antlr4 will be enough.

~~~
sudo apt install default-jre
cd Antlr4ConanExample/src
source regenerate_parser.sh
conan install . --build missing
conan build .
a4test
~~~


## How to ...

There is a .circleci script.

If you want to see how build this code from scrach on clean system - look at the script.
There is all builded from scratch.

## Conan 2.0 Compatibility

Last change: I've modified conanfile.py to be compatible with conan 2.0 format.
Currently I've checked it with conan 1.59 and 2.0 - this script is compatible with both of them.
I've removed build folder as well from this repository - currently this is created by conan generator.

