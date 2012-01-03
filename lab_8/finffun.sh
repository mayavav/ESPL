#!/bin/sh

found_files = `find . -name "f*.c"`

for i in $found_files; do
  if grep $2 $i; then 
    do_it = `grep -w -n $2 -A 5 $i`

    echo "$1"
    echo "==================================="

    echo  "do_it"

    echo "==================================="
  fi
done