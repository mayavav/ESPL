all: tmp

tmp: tmp.o hsvmhr.o
	gcc  -m32 -Wall -o tmp tmp.o hsvmhr.o

tmp.o: tmp.c
	gcc  -m32 -Wall -c -o tmp.o tmp.c

hsvmhr.o: hsvmhr.asm
	nasm -g -f elf -o $@ $<

clean:
	rm *.o tmp