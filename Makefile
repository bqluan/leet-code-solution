SHELL = /bin/sh

CC    = cc
LINK  = $(CC)

.PHONY: all
all: objs objs/number_of_1_bits objs/sqrt

objs/number_of_1_bits: objs/number_of_1_bits.o
	$(LINK) -o $@ objs/number_of_1_bits.o

objs/number_of_1_bits.o: number_of_1_bits/main.c
	$(CC) -c $(CFLAGS) -o $@ $<

objs/sqrt: objs/sqrt.o
	$(LINK) -o $@ objs/sqrt.o

objs/sqrt.o: sqrt/main.c
	$(CC) -c $(CFLAGS) -o $@ $<

objs:
	mkdir objs

.PHONY: clean
clean:
	rm -rf objs
