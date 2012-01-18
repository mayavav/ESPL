#!/urs/bin/pyton

import os, sys, time

#class main:
i = 1
for line in file(sys.argv[1]):
  
	print("line number: %3d" % i)
	lineList = line.split(' ')
	print("number of words un this line: %3d" % len(lineList))

	for j in lineList :
		print j
	i+=1
		
		#print "%3d: %s" % (j, lineList[j])
		
	