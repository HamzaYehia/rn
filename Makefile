CC=gcc

rn: rn.c
	$(CC) rn.c -o rn

clean:
	rm rn.c