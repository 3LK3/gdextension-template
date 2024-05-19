#!/usr/bin/env python
import os
import sys

library_name = "gdstatemachine"

env = SConscript("godot-cpp/SConstruct")
# For reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "demo/bin/lib{}.{}.{}.framework/lib{}.{}.{}".format(
            library_name, env["platform"], env["target"], 
            library_name, env["platform"], env["target"]
        ),
        source=sources,
    )
else:
    library = env.SharedLibrary(
        "demo/bin/lib{}{}{}".format(library_name, env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)
