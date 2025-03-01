#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <algorithm>

#include "Ticker.h"
#include "Player.h"

class Market {
private:
	std::vector<Ticker> m_tickerV;
	std::vector<Player> m_playerV;
	void fulfillOrders();

public:
	static unsigned int date;
	Market(long long n, long m = 100);
	Market(std::vector<Ticker> ts, std::vector<Player> ps);
	Market(std::vector<Ticker> ts);
	void createTickers(long long n);
	void createPlayers(long m);
	void updateMarket();
	void placeOrders();
};