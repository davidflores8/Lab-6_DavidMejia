main.out: Carro.o Chasis.o Pintura.o Motor.o main.o
	g++ main.o Carro.o Chasis.o Motor.o Pintura.o -o main.out

main.o: main.cpp Carro.h Pintura.h Chasis.h Motor.h
	g++ -c main.cpp

Carro.o: Carro.cpp Pintura.h Chasis.h Motor.h Carro.h
	g++	-c Carro.cpp

Chasis.o: Chasis.cpp Chasis.h
	g++ -c Chasis.cpp

Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp

Pintura.o: Pintura.cpp Pintura.h
	g++ -c Pintura.cpp		

