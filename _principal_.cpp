#include <iostream>
#include <string>
#include "monster.h"
#include "vampire.h"
#include "dragon.h"


int main(){

   using namespace std;
    cout <<"oi";

    Monster ma[3];

    Vampire ma [0] = new Vampire();
    Dragon ma [1] = new Dragon();
    Monster ma [2] = new Monster();

    for(int x = 0; x <3; x++) {
           ma[x].Assustar(x);
    }
    return 1
    ;
     system("pause");
}
