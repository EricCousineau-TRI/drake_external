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
# This consumes @drake//drake/automotive:curve2 and @drake//drake/solvers:mathematical_program
bazel run //cpp_scratch:drake_external
```
