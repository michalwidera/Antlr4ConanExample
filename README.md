# Antlr4ConanExample

This is Example of ANTLR4-cppruntime usage.
Please note that usage of Conan Package manager solves dependency issues in different build environments.


> **_NOTE:_** In case of Conan package manager you do not need download and build manually ANTLR4 source or binary packages! You can pick dependency in conanfile.py and hit conan install command. Conan already did it for you! All binary packages are here and you can check if your platform is already supported by given system here: https://conan.io/center/antlr4-cppruntime


Here is code snippets that build working parser on your platform.

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
