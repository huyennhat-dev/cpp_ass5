#include <iostream>
#include "coin.h"

int main() {
    Coin coin;
   cout << "The side initially facing up is " << coin.getSideUp() << endl;

    int numHeads = 0;
    int numTails = 0;
    for (int i = 0; i < 20; i++) {
        coin.toss();
       cout << "Toss " << (i + 1) << ": " << coin.getSideUp() << endl;
        if (coin.getSideUp() == "heads") {
            numHeads++;
        }
        else {
            numTails++;
        }
    }

    cout << "Number of heads: " << numHeads << endl;
    cout << "Number of tails: " << numTails << endl;

    return 0;
}
