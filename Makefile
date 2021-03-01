all: main

main: src/main.cpp
	g++ -o main src/main.cpp src/Principal.cpp src/pessoa.cpp

clean:
	rm main