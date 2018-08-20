licenses(["notice"])

cc_library(
    visibility = ["//visibility:public"],
    name = "g3log",
    includes = [
        "include",         
        "src",                        
    ],
        
    srcs = glob(
        [
            "src/*.cpp",
            "src/*.ipp",
        ],        
        exclude = [
            "src/crashhandler_windows.cpp",
            "src/stacktrace_windows.cpp",            
            ],
    ),
    hdrs = glob(
        [
            "include/g3log/*.hpp",
            "src/g3log/*.hpp",            
        ],
        exclude = [
            "src/g3log/stacktrace_windows.hpp",
            ],
    ),
    linkopts = [
        "-pthread",
    ],
)
