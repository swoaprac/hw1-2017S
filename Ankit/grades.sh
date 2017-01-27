#!/bin/bash

awk -F',' '{if ($3 == 2) print $4}' $1 | sort -nr | head -n 5
