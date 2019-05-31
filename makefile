run: main.o Persona.o AirBender.o FireBender.o WaterBender.o NonBender.o Poder.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o
	g++ main.o Persona.o AirBender.o FireBender.o WaterBender.o NonBender.o Poder.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o -o run
Persona.o: Persona.cpp AirBender.cpp FireBender.cpp WaterBender.cpp NonBender.cpp
	g++ -c Persona.cpp AirBender.cpp FireBender.cpp WaterBender.cpp NonBender.cpp 

Poder.o: Poder.cpp Ofensivo.cpp Defensivo.cpp Curativo.cpp Invocacion.cpp
	g++ -c Poder.cpp Ofensivo.cpp Defensivo.cpp Curativo.cpp Invocacion.cpp

main.o: main.cpp
	g++ -c main.cpp