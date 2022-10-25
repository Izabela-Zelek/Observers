#pragma once
#include "Observer.h"
class Achievements : public Observer
{
public:
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
        t_window.draw(achievementText);
    }

private:

    sf::Text achievementText;

    void unlock()
    {
        achievementText.setString("They passed the line!");
    }
};
