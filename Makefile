OBJS = Main.o Card.o Deck.o Game.o Player.o FileUtil.o CardStore.o
CC = g++ 

LinkOut: $(OBJS)
	g++ -o LinkOut $(OBJS)
	rm -f $(OBJS)

Main.o:
	g++ -c Main.cpp

Card.o:
	g++ -c Card.cpp
	
Deck.o:
	g++ -c Deck.cpp
	
Game.o:
	g++ -c Game.cpp
	
Player.o:
	g++ -c Player.cpp
	
FileUtil.o:
	g++ -c util/FileUtil.cpp
	
CardStore.o:
	g++ -c CardStore.cpp

clean:
	rm -f core LinkOut $(OBJS)