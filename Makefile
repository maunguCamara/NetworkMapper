flags = -03 -Wall -std=c2x -fPIC -SHARED -ldl -D_GNU_SOURCE
ldflags = 
all: clean tahngutils.so
nm-version1: nm-version1.o
	cc ${flags} $^ -o $@ ${ldflags}

nm-naive.o: nm-naive.c
	cc ${flags} -c $^

clean 
rm -f *.o nm-version1
