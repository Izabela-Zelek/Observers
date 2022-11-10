/// <summary>
/// Authors: Izzy & Caroline
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Goal.h"
#include "Physics.h"
#include "Achievements.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window; // main SFML window
	bool m_exitGame; // control exiting game
	bool m_callOnce = true;

	Player m_player;
	Goal m_goal;
	Physics m_physics;
	Achievements m_achievement;
};

#endif // !GAME_HPP

