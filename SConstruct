#!/usr/bin/env python
import os
import sys


# Settings
#
library_name = "{{lib_name}}"
output_path = "demo/addons/{{name}}"
source_path = "src"


# Build definition
#
env = SConscript("godot-cpp/SConstruct")
# For reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=[f"{source_path}/"])
sources = Glob(f"{source_path}/*.cpp")

if env["platform"] == "macos":
    library = env.SharedLibrary(
        f"{output_path}/lib{library_name}.{env["platform"]}.{env["target"]}.framework/lib{library_name}.{env["platform"]}.{env["target"]}",
        source=sources,
    )
else:
    library = env.SharedLibrary(
        f"{output_path}/lib{library_name}{env["suffix"]}{env["SHLIBSUFFIX"]}",
        source=sources,
    )

Default(library)