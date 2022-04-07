#ifndef CART_H
#define CART_H

#include <iostream>
#include <string>
#include "meerkat.h"

using namespace std;

class cart
{
public:
    cart();                         // create an empty cart object
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    bool added;
    int kat_count;
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                    // for each meerkat in the order they were added
};

#endif