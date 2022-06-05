CC=g++

all: palmisland

palmisland: main.cpp cards.cpp cards.hpp pages.cpp pages.hpp
	$(CC) main.cpp cards.cpp pages.cpp -o palmisland

