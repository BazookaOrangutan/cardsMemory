#pragma once
#include "Card.h"
#include <array>

#define random(a, b) a + rand() % (b - a + 1)

class Deck
{	
	std::array<Card*, 32> deck;
	int index = 0;
	

public:
	Deck();
	void addCard(Card* card);
	void shuffle();
	Card* getCard(int i);
	int getSize();
};

