CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o moyenne.o bubble_sort.o mediane.o
	echo "Compiling final"
	gcc $(CFLAGS) main.o moyenne.o bubble_sort.o mediane.o -o final
	chmod +x final
	
main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

moyenne.o: moyenne.c
	echo "Compiling moyenne"
	gcc $(CFLAGS) -c moyenne.c

bubble_sort.o: bubble_sort.c
	echo "Compiling bubble"
	gcc $(CFLAGS) -c bubble_sort.c

mediane.o: mediane.c
	echo "Compiling mediane"
	gcc $(CFLAGS) -c mediane.c

clean:
	echo: "Removing all but the source files"
	rm *.o final