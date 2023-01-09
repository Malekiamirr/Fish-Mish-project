all : compile link

compile:
	g++ -Isfml/include -c src/app.cpp src/clear.cpp src/Player.cpp src/createNewFile.cpp src/createRandom.cpp src/draw.cpp src/getInformation.cpp src/getUserInput.cpp src/help.cpp src/menu.cpp src/run.cpp src/startGame.cpp

link:
	g++ app.o Player.o -o app -Lsfml/lib -lsfml-graphics -lsfml-window -lsfml-system
	