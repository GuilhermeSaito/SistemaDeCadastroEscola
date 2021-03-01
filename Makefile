all: main
	./main

main: src/main.cpp
	g++ -o main src/main.cpp src/Principal.cpp src/pessoa.cpp src/universidade.cpp src/departamento.cpp src/aluno.cpp src/professor.cpp

clean:
	rm main