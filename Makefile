CC=g++

all: palmisland

palmisland: main.cpp cards.cpp cards.hpp
	$(CC) main.cpp cards.cpp -o palmisland

