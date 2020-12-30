
CC = gcc


libdemo: libdemo.o add.o 
	$(CC) -o libdemo libdemo.o add.o


libdemo.o: libdemo.c
	$(CC) -c -o libdemo.o libdemo.c

add.o: add.c
	 $(CC) -c -o add.o add.c

clean:
	rm -rf *.o libdemo
	