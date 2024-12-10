CC = g++
CFLAGS = -std=c++11 -Wall

all: hwp2_ue301

hwp2_ue301: hwp2_ue301.o liste.o
	$(CC) $(CFLAGS) -o hwp2_ue301 hwp2_ue301.o liste.o

hwp2_ue301.o: hwp2_ue301.cpp liste.h
	$(CC) $(CFLAGS) -c hwp2_ue301.cpp

liste.o: liste.cpp liste.h listenElement.h
	$(CC) $(CFLAGS) -c liste.cpp

clean:
	rm -f *.o hwp2_ue301
