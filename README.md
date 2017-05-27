# Info

This shows how to incorporate `drake` as an external Bazel project, with the necessary changes made to `drake`.

## Testing

To quickly test this out with code:

```bash
# Does not work under /tmp, use ~/tmp/${DATE}
cur="${HOME}/tmp/$(date -Im | sed 's#:#-#g')"
mkdir -p $cur && cd $cur

git clone https://github.com/EricCousineau-TRI/drake_external.git
cd drake_external
# We don't need submodules in drake, at least for this test. Shallow init.
git submodule update --init
# This consumes @drake//solvers:mathematical_program as a C++ dependency, but
# also consumes @drake//drake:libdrake.so to require as much to be built as
# possible (as a test).
bazel run //example
```

## Unittests
You may also run most of `drake`'s unittests externally:

```bash
bazel test @drake//drake/...
```

Please note that `bazel test @drake//...` will cause `bazel` to puke if:

* The `snopt` BUILD setup does not work (which it most likely won't),
* You have invoked `bazel` directly in `drake-distro`, in which it will try to
crawl the generated `bazel-drake-distro` symlink folder, and/or
* If you have not provided a path to an existing CMake installation path with
`drake-visualizer`.
