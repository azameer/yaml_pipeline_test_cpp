CC=g++
staticlib:
	$(CC) -o lib_add.o -c src/myadd.cpp
	$(CC) -o lib_sub.o -c src/mysub.cpp
	$(CC) -o lib_mul.o -c src/mymul.cpp
	ar rcs mystaticlib.a lib_add.o lib_sub.o lib_mul.o
	$(CC) -o main.o -c src/main.cpp
	$(CC) -o main main.o -L. mystaticlib.a
clean:
	rm *.o *.a main

