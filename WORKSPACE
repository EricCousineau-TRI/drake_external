workspace(name = "drake_external")

local_repository(
    name = "drake",
    path = "externals/drake-distro",
)

# Use workaround from:
# * https://github.com/bazelbuild/bazel/issues/2757#issuecomment-290448615
# * https://groups.google.com/forum/#!topic/bazel-discuss/OhBIZ1DzSIw

# Copied from @drake//WORKSPACE
# -- START Required Load-Level Transitive Dependencies
load("//tools:github.bzl", "github_archive")
github_archive(
    name = "io_bazel_rules_go",
    repository = "bazelbuild/rules_go",
    commit = "0.4.4",
    sha256 = "afec53d875013de6cebe0e51943345c587b41263fdff36df5ff651fbf03c1c08",
)
# -- END Required Load-Level Transitive Dependencies

load("//tools:drake_deps.bzl", "drake_deps")
# Also works (because of hack):
#   load("@drake//tools:drake_deps.bzl", "drake_deps")
drake_deps()
