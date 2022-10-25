#pragma once
#include "Subject.h"
class Physics : public Subject
{
public:
    void Physics::updateEntity(Player& entity, Goal& goal)
    {
        bool isHeWin = entity.isPassingLine(goal);
        if (isHeWin)
        {
            notify(entity, Event::EVENT_CROSSED_SCREEN);
        }
    }
};

