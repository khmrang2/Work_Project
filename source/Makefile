CC=g++
CFLAGS=-c -Wall
OBJS=Piece.o main.o
TARGET=main.out

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ 
	
clean:
	rm *.o
	rm *.out