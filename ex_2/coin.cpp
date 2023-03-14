#include "Coin.h"

Coin::Coin() {
    srand(time(0));

    int randomNum = rand() % 2;  
    if (randomNum == 0) {
        sideUp = "heads";
    }
    else {
        sideUp = "tails";
    }
}

void Coin::toss() {
    int randomNum = rand() % 2;  
    if (randomNum == 0) {
        sideUp = "heads";
    }
    else {
        sideUp = "tails";
    }
}

string Coin::getSideUp() {
    return sideUp;
}
