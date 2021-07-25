OBJS = Main.o Card.o Game.o Player.o FileUtil.o cardStore.o
CC = g++ 

LinkOut: $(OBJS)
	g++ -o LinkOut $(OBJS)
	rm -f $(OBJS)

Main.o:
	g++ -c Main.cpp

Card.o:
	g++ -c Card.cpp
	
Game.o:
	g++ -c Game.cpp
	
Player.o:
	g++ -c Player.cpp
	
FileUtil.o:
	g++ -c util/FileUtil.cpp
	
cardStore.o:
	g++ -c cardStore.cpp

clean:
	rm -f core LinkOut $(OBJS)