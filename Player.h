#pragma once
#include <SFML/Graphics.hpp>
#include "Goal.h"
class Player
{
public:
	Player();

	bool isPassingLine(Goal& t_goal);
	void update();
	void render(sf::RenderWindow& t_window);
private:
	sf::RectangleShape m_player;
};
