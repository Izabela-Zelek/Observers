#include "Goal.h"

Goal::Goal()
{
	m_goal.setSize(sf::Vector2f(10, 800));
	m_goal.setFillColor(sf::Color::White);
	m_goal.setOrigin(m_goal.getLocalBounds().width / 2, m_goal.getLocalBounds().height / 2);
	m_goal.setPosition(600, 400);
}

void Goal::update()
{
}

void Goal::render(sf::RenderWindow& t_window)
{
	t_window.draw(m_goal);
}
