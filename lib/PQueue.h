#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"
#include <iostream>
#include <stdexcept>
using namespace std;
  
template<typename T>
class PQueue
{
  public:
    PQueue();
    ~PQueue();
    void enqueue(const T& element, int priority);
    T dequeue();
    int getSize() const;
    
  private:
    LinkedList<T> list;
};
  
template<typename T>
PQueue<T>::PQueue()
{
}

template<typename T>
PQueue<T>::~PQueue()
{
}
  
template<typename T>
void PQueue<T>::enqueue(const T& element,int priority)
{
  list.insert(priority,element);
}
  
template<typename T>
T PQueue<T>::dequeue()
{
  return list.removeFirst();
}
  
template<typename T>
int PQueue<T>::getSize() const
{
  return list.getSize();
}

template<typename T>
void printQueue(PQueue<T>& queue)
{
  cout << "======================" << endl;
  while (queue.getSize() > 0)
    cout << queue.dequeue();
  cout << endl;
}

// template<typename T>
// void printQueue(PQueue<T>& n, string header[]) {
//     cout << "\nPrinting the data..." << endl;
//     Person p;
    
//     cout << setw(20) << header[0] << setw(15) << header[1] << endl;
//     while (n.getSize() > 0) {
//         p = n.dequeue();
//         cout << setw(20) << p.name << setw(15) << p.car << endl;
//     }
//     cout << endl;
// } 
  
#endif