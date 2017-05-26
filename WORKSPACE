workspace(name = "drake_external")

local_repository(
    name = "drake",
    path = "externals/drake-distro",
)

# -- START drake externals
# Copy and paste this code section to any external Bazel projects that depend
# on drake and need its dependencies for convenience.
# @note See @drake//tools:externals.bzl for more info.

# Rule prerequisites.
load("@drake//tools:github.bzl", "github_archive")
# Required for buildifier.
github_archive(
    name = "io_bazel_rules_go",
    repository = "bazelbuild/rules_go",
    commit = "0.4.4",
    sha256 = "afec53d875013de6cebe0e51943345c587b41263fdff36df5ff651fbf03c1c08",
)

# Load external repostories.
load("@drake//tools:externals.bzl", "drake_external_repositories")
drake_external_repositories()
# -- END drake externals
