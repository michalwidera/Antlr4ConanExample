from conans import ConanFile, CMake

class AntLR4Example(ConanFile):
    settings = "os", "compiler", "build_type", "arch", "cppstd"
    requires = ["cmake/3.21.3"]
    license = "MIT"
    author = "Michal Widera"
    description = "ANTLR4 example"
    homepage = "https://github.com/michalwidera/Antlr4ConanExample"
    generators = "cmake" , "cmake_find_package"
    testing = []

    def configure(self):
        self.settings.compiler.cppstd = 20
        self.settings.compiler.libcxx = "libstdc++11"

    def requirements(self):
        self.requires("antlr4-cppruntime/4.9.3")

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        cmake.install()
