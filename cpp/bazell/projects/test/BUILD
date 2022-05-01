cc_binary(
    name = "test",
    srcs = ["test.cc"],
    deps = [
        ":hello_lib",
    ],
)

cc_library(
    name = "hello_lib",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
)

cc_test(
    name = "hello_test",
    srcs = [
        "hello_test.cc"
    ],
    deps = [
        ":hello_lib"
    ],
)
