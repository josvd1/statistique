CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o moyenne.o merge_sort.o mediane.o q1.o q3.o
	echo "Compiling final"
	gcc $(CFLAGS) main.o moyenne.o merge_sort.o mediane.o q1.o q3.o -o final
	chmod +x final
	
main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

moyenne.o: moyenne.c
	echo "Compiling moyenne"
	gcc $(CFLAGS) -c moyenne.c

merge_sort.o: merge_sort.c
	echo "Compiling bubble"
	gcc $(CFLAGS) -c bubble_sort.c

mediane.o: mediane.c
	echo "Compiling mediane"
	gcc $(CFLAGS) -c mediane.c

q1.o: q1.c
	echo "Compiling Q1"
	gcc $(CFLAGS) -c q1.c

q3.o: q3.c
	echo "Compiling Q3"
	gcc $(CFLAGS) -c q3.c



clean:
	echo: "Removing all but the source files"
	rm *.o
