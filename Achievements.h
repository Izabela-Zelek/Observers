#pragma once
#include "Observer.h"

class Achievements : public Observer
{
public:

    Achievements()
    {
        if (!font.loadFromFile("ASSETS//FONTS//ariblk.ttf"))
        {
            std::cout << "Font not fount" << std::endl;
        }

        achievementText.setFont(font);
        achievementText.setCharacterSize(20U);
        achievementText.setString("They passed the line!");
        achievementText.setFillColor(sf::Color::White);
        achievementText.setPosition(50, 50);
    }

    virtual void onNotify(const Player& entity, Event event)
    {
        switch (event)
        {
        case Event::EVENT_CROSSED_SCREEN:
                unlock();
            break;
        }
    }

    void render(sf::RenderWindow& t_window)
    {
        if (unlocked)
        {
            t_window.draw(achievementText);
        }
    }

    bool isUnlocked() { return unlocked; }

private:

    sf::Text achievementText;
    sf::Font font;
    bool unlocked = false;

    void unlock()
    {
        unlocked = true;
    }
};
