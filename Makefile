all : compile link

compile:
	g++ -Isfml/include -c src/app.cpp src/Player.cpp

link:
	g++ app.o -o app -Lsfml/lib -lsfml-graphics -lsfml-window -lsfml-system
	