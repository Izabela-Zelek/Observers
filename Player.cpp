#include "Player.h"

Player::Player()
{
	m_player.setSize(sf::Vector2f(100, 200));
	m_player.setFillColor(sf::Color::Red);
	m_player.setOrigin(m_player.getLocalBounds().width / 2, m_player.getLocalBounds().height / 2);
	m_player.setPosition(300, 500);
}

bool Player::isPassingLine(Goal& t_goal)
{
	return t_goal.getXPos() < m_player.getPosition().x;
}

void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_player.move(sf::Vector2f(-7, 0));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_player.move(sf::Vector2f(7, 0));
	}

}

void Player::render(sf::RenderWindow& t_window)
{
	t_window.draw(m_player);
}
