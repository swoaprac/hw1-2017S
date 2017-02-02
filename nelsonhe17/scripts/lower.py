import sys
f = open(sys.argv[1],'r')
txt = f.read()
f.close()
print txt.lower()


