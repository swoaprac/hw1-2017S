#!/bin/bash

awk -F','\
'{
	if ($3 == 2) { # Assignment is the third field
		print $4
	}
}' $1 | sort | head -n 5
