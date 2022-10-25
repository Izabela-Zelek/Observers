#pragma once
#include <SFML/Graphics.hpp>
class Goal
{
public:
	Goal();

	void update();
	void render(sf::RenderWindow& t_window);

	int getXPos() { return m_goal.getPosition().x; }
private:
	sf::RectangleShape m_goal;
};
