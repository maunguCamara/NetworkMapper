flags = -03 -Wall -std=c2x -fPIC -SHARED -ldl -D_GNU_SOURCE
ldflags = 
al: clean tahngutils.so

tahngutils.o: tahngutils.c2
	$(CC) $(flags) -c tahngutils.c2cc ${flags} -c $^

clean:
	rm -f tahngutils.o tahngutils.so
