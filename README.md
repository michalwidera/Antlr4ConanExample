# Antlr4ConanExample

This is Example of ANTLR4-cppruntime usage.
Please note that usage of Conan Package manager solves dependency issues in different build environments.

## Build example ANTLR4 parser in C++ type:

~~~
pip install conan
git clone https://github.com/michalwidera/Antlr4ConanExample
cd Antlr4ConanExample
mkdir build
cd build
conan install ..
conan build ..
a4test
~~~

## Regenerate grammar form .g4 file

(Assumed that build step have been already done.)

~~~
cd Antlr4ConanExample/Src
source regenerate_parser.sh
cd ../build
conan build ..
a4test
~~~
