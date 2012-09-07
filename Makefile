CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic

euler8.o: euler8.cpp
	$(CC) $(CFLAGS) -o euler8.o euler8.cpp

clean:
	rm -f *.o
