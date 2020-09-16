main: main.cpp
	g++ main.cpp -o prg.o -framework GLUT -framework OpenGL

clean: main.o prg.o
	rm prg.o

zip: 
	tar -czvf main.cpp main.h prg ~/game.zip
