# @ref https://bazel.build/versions/master/docs/external.html

cc_binary(
    name = "example",
    srcs = ["example.cc"],
    deps = [
        "@drake//drake/solvers:mathematical_program",
    ],
    data = [
        # Use mega library as data so it can build
        "@drake//drake:libdrake.so",
    ], 
)
