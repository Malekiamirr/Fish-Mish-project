all : compile link

compile:
	g++ -Isfml/include -c src/a.cpp

link:
	g++ a.o -o app -Lsfml/lib -lsfml-graphics -lsfml-window -lsfml-system
	