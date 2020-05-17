cc_library(
    name = "node",
    hdrs = ["node.h"]
)

cc_library(
    name = "empty_exception",
    hdrs = ["empty_exception.h"],
    srcs = ["empty_exception.cc"],
    visibility = ["//lib/test:__pkg__"]
)

cc_library(
    name = "stack",
    hdrs = ["stack.h"],
    deps = ["node", "empty_exception"],
    visibility = ["//lib/test:__pkg__"]
)