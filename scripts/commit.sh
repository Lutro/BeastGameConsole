#!/bin/bash

# to use first time, first add permissions * chmod u+x commit.sh *

git add .
git commit -m "$1"
git push 