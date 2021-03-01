all: main
	./main

main: src/main.cpp
	g++ -o main src/main.cpp src/Principal.cpp src/pessoa.cpp src/universidade.cpp src/departamento.cpp

clean:
	rm main