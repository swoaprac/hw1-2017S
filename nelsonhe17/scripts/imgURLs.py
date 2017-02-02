import sys
f = open(sys.argv[1],'r')
txt = f.read()
f.close()
txt = txt.lower()
while txt.find("<img ")!=-1:
	urlstart = txt.find('src=',txt.find("<img "))+5
	print txt[urlstart:txt.find('"',urlstart)]
	txt = txt[urlstart:]

