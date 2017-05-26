workspace(name = "drake_external")

local_repository(
    name = "drake",
    path = "externals/drake-distro",
)

# Use workaround from:
# * https://github.com/bazelbuild/bazel/issues/2757#issuecomment-290448615
# * https://groups.google.com/forum/#!topic/bazel-discuss/OhBIZ1DzSIw

# Copied from @drake//WORKSPACE. Ensure that this is syncrhonized!!!
# -- START Required Load-Level Transitive Dependencies
load("@drake//tools:github.bzl", "github_archive")
# Required for buildifier.
github_archive(
    name = "io_bazel_rules_go",
    repository = "bazelbuild/rules_go",
    commit = "0.4.4",
    sha256 = "afec53d875013de6cebe0e51943345c587b41263fdff36df5ff651fbf03c1c08",
)
# -- END Required Load-Level Transitive Dependencies

load("@drake//tools:drake_deps.bzl", "drake_deps")
drake_deps() # Ignore install_dir, don't need drake-visualizer right now
