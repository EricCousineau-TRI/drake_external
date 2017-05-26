# Info

This shows how to incorporate `drake` as an external Bazel project, with the necessary changes made to `drake`.

## Testing

To quickly test this out:

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
