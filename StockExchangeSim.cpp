// StockExchangeSim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>
#include <algorithm>

#include "Player.h"
#include "Ticker.h"
#include "Market.h"

unsigned int Market::date = 1;

int main() {
    Market tst(1000);
    tst.placeOrders();
    tst.updateMarket();
    return EXIT_SUCCESS;
}