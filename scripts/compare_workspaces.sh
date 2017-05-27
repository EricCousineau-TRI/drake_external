#!/bin/bash
set -e -u

# Compare this workspace to drake's workspace file
# There should be little difference for a toy downstream example.
cd $(dirname $BASH_SOURCE)/..

gdiff="git diff --no-index --ignore-space-change" # --word-diff
${gdiff} externals/drake-distro/WORKSPACE WORKSPACE
