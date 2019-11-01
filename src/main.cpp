#include <iostream>
#include <ctime>

#include "my_list.h"

using namespace xi;
using namespace std;
int randInt(int a, int b)
{
    srand( time(0) );
    return rand() % (b-a + 1) + a;
}
int main(){
    List list;
    list.createList(randInt(17, 45));
    list.print();
    return 0;
}