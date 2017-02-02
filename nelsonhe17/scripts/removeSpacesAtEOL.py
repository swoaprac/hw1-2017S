import sys
f = open(sys.argv[1],"r")
txt = f.read()
f.close()
#print '"'+sys.argv[2]+'","'+sys.argv[3]+'"'
#new = txt.replace(sys,argv[2],sys.argv[3])
new = txt.replace(' '+chr(10),chr(10))
while new!=txt:
	txt = new
	#new = txt.replace(sys.argv[2],sys.argv[3])
	new = txt.replace(' '+chr(10),chr(10))
print txt

