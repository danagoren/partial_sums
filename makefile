partialSums : partialSums1.o partialSums2.o
	gcc -g -Wall -ansi -pedantic partialSums1.o partialSums2.o -o partialSums
partialSums1.o : partialSums.c
	gcc -c -Wall -ansi -pedantic partialSums.c -o partialSums1.o
partialSums2.o : partialSums2.c
	gcc -c -Wall -ansi -pedantic partialSums2.c -o partialSums2.o
