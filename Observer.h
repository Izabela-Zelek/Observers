#pragma once
#include "Event.h"
#include "Player.h"
#include "Goal.h"
#include <iostream>

class Observer
{
public:
	virtual ~Observer() {}
	virtual void onNotify(const Player& player, Event event) = 0;
};
