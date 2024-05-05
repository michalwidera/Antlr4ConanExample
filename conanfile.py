from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout

class AntLR4Example(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    license = "MIT"
    author = "Michal Widera"
    description = "ANTLR4 example"
    homepage = "https://github.com/michalwidera/Antlr4ConanExample"

    testing = []
    generators = ("CMakeToolchain","CMakeDeps")

    requires = (
        "antlr4-cppruntime/4.13.1",
        "antlr4/4.13.1",
        "openjdk/21.0.1",
    )

    def layout(self):
        cmake_layout(self)

    def build_requirements(self):
        self.tool_requires("cmake/[>=3.25]")

    def package_info(self):
        self.cpp_info.system_libs = ["dl", "rt", "pthread"]

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
