#!/bin/sh
find .  -name "*.sh" -print | sed "s/.*\///" | sed 's/\.sh//g'
