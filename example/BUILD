# @ref https://bazel.build/versions/master/docs/external.html

cc_binary(
    name = "example",
    srcs = ["example.cc"],
    deps = [
        # Use mega library.
        # @note This can be made more granular.
        "@drake//drake",
    ],
)
