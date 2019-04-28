#!/bin/sh

set -x

git add *.c *.cc
git add CMakeLists.txt
git commit -a -m '.'
git fetch origin
git rebase origin/master
git push origin master
