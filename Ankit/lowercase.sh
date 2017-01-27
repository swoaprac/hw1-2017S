#!/bin/bash
#Well this works
awk '{ print(tolower($0)) }' $1
