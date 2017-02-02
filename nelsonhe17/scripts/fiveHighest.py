import sys
f = open(sys.argv[1],'r')
lines = f.readlines()
f.close()
entry = lambda x,i: x.split(',')[i]
filtered = []
for line in lines:
	if entry(line,2)==sys.argv[2]:
		filtered.append(line)
grades = map(lambda x: float(entry(x,3)),filtered)
grades.sort()
out = grades[-5:]+[' '*(5-len(grades[-5:]))]
print '{} {} {} {} {}'.format(out[0],out[1],out[2],out[3],out[4])


