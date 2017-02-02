# What I came up with before I found out aspell exists (produces a list of correctly spelt words):
# cat $1 | tr ' ' '\n' | grep -f- -swio /usr/share/dict/words | uniq
cat $1 | aspell list
