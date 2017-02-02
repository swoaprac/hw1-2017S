import sys
f = open(sys.argv[1],"r")
txt = f.read()
f.close()
print txt.replace(chr(ord('\r'))+chr(10),chr(10))
