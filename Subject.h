#pragma once
#include "Observer.h"
class Subject
{
private:
    static const int MAX_OBSERVERS = 2;
    Observer* observers_[MAX_OBSERVERS];
    int numObservers_;
protected:
    void notify(const Player& entity, Event event)
    {
        for (int i = 0; i < numObservers_; i++)
        {
            observers_[i]->onNotify(entity, event);
        }
    }
public:
    void addObserver(Observer* observer)
    {
        // Add to array...
    }
    void removeObserver(Observer* observer)
    {
        // Remove from array...
    }
};
