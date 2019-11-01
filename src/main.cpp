#include <iostream>
#include <ctime>

#include "my_list.h"

using namespace xi;
using namespace std;
int randInt(int a, int b)
{
    srand( time(0) );
    return rand() % (b-a + 1


    +) + a;
}
int main(){
    List list;
    list.print();
    list.add(5);
    list.print();
    list.add(7);
    list.print();
    Node* node = new Node(8);
    list.insertByValue(7, node);
    list.print();
    cout<<list.findByValue(8);
    srand( time(0) );
   cout<<rand()%3;
    return 0;
}