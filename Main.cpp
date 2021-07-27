#include <iostream>
#include <fstream>
#include <iomanip> 
#include "lib/PQueue.h"
#include "headers/Card.h"
#include "headers/Game.h"
#include "headers/Deck.h"
#include "headers/Entity.h"
#include "util/FileUtil.h"


#include <string>
using namespace std;



// void readFile(Queue<Card>*,string filename , string header[]) ;

// template<typename T>
// void printQueue(Queue<T>& queue)
// {
//   while (queue.getSize() > 0)
//     cout << queue.dequeue() << " ";
//   cout << endl;
// }

// template<typename T>
// void printQueue(Queue<T>& n, string header[]) {
//     cout << "\nPrinting the data..." << endl;
//     Card c;
    
//     cout << left << setw(10) << header[0] << setw(30) << header[1] <<
//     setw(30) << header[2]<< setw(10) << header[3] << setw(10) << header[4] << setw(10) << header[5] << endl;
//     while (n.getSize() > 0) {
//         c = n.dequeue();
//         cout << c;
//     }
//     cout << endl;
// } 


int main()
{
    Game game = Game();
    game.run();
    
    srand(time(NULL));
    
    CardStore cs;
    Deck d = Deck(cs);
    d = d.createHunterStarterDeck();
    
    printQueue(d.deckList);
    cout << endl;
    
    Entity player = Entity();
    player.setEntityName("Player Test");
    player.setSpiritType(CharacterType::Hunter);
    player.generateDeck(CharacterType::Hunter);
    
    cout << player.getEntityName() << endl;
    Deck p = player.getDeck();
    printQueue(p.deckList);
    
    // cout << player.getDeck() << endl;
    // printQueue();
    
    
  // Queue of int values
//   Queue<int> intQueue;
//   for (int i = 0; i < 10; i++)
//     intQueue.enqueue(i); // Add i to the queue

//   printQueue(intQueue);
  
  
    // Creating an object of CSVWriter
    // Get the data from CSV File
   
  
//   // ==========================
//   Queue<Card> pQueue;
//   string header[6];
    
//   readFile(&pQueue,"card_data.csv", header);
//   printQueue(pQueue,header);

  return 0;
}

// void readFile(Queue<Card>* q_ref, string filename, string header[])  
// {
//     ifstream input;
//     input.open(filename);
//     string line;
//     int pos;
    
    
//     // get header
//     getline(input,line);
//     for (int x = 0, pos ; x < 6; x++)
//     {
//         pos = line.find(",");
//         header[x] = line.substr(0, pos > 0 ? pos : line.length());
//         line.erase(0, pos+1);
//     }
    
//     // get data
//     Card c;
//     while(getline(input,line)) {
//         pos = line.find(",");  
//         int ctype = stoi(line.substr(0,pos));
//         switch(ctype)
//         {
//             case 1:
//             c.cardType = Type::Attack;
//             break;
//             case 2:
//             c.cardType = Type::Skill;
//             break;
//             case 3:
//             c.cardType = Type::Status;
//             break;
//         }
//         line.erase(0,pos+1);
//         pos = line.find(",");    
//         c.cardName = line.substr(0,pos);
//         line.erase(0,pos+1);
//         pos = line.find(",");
//         c.description = line.substr(0,pos);
//         line.erase(0,pos+1);
//         pos = line.find(",");
//         c.cost = stoi(line.substr(0,pos));
//         line.erase(0,pos+1);
//         pos = line.find(",");
//         c.rarity = stoi(line.substr(0,pos));
//         c.color = line.substr(pos+1);
        
    
        
//         q_ref->enqueue(c);
//     }
    
   
    
//     input.close();
    
// }
