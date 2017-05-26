package(default_visibility = ["//visibility:public"])

# Copied from: @drake//tools:BUILD
cc_toolchain_suite(
    name = "default-toolchain",
    toolchains = {
        "darwin|compiler": "@drake//tools:cc_toolchain_apple",
        "k8|clang-3.9": "@drake//tools:cc_toolchain_linux",
        "k8|gcc-4.9": "@drake//tools:cc_toolchain_linux",
        "k8|gcc-5": "@drake//tools:cc_toolchain_linux",
        "k8|gcc-6": "@drake//tools:cc_toolchain_linux",
    },
)
