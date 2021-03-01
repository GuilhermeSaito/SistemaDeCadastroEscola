all: main

main: src/main.cpp
	g++ -o main src/main.cpp src/Principal.cpp

clean:
	rm main