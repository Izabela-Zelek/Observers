#pragma once
#include "Observer.h"
class Subject
{
private:
    static const int MAX_OBSERVERS = 2;
    Observer* observers_[MAX_OBSERVERS] = { nullptr ,nullptr };
    int numObservers_ = 0;
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
        if (numObservers_ < MAX_OBSERVERS)
        {
            observers_[numObservers_] = observer;
            std::cout << "Added observer" << std::endl;
            numObservers_++;
        }

        std::cout << "Observer 1: " << observers_[0] << std::endl;
        std::cout << "Observer 2: " << observers_[1] << std::endl;
        std::cout << "----------------------------" << std::endl;
    }
    void removeObserver(Observer* observer)
    {
        for (int i = 0; i < MAX_OBSERVERS; i++)
        {
            if (observers_[i] == observer)
            {
                observers_[i] = nullptr;
                std::cout << "Removed observer" << std::endl;
                numObservers_ = i;
            }
        }
        std::cout << "Observer 1: " << observers_[0] << std::endl;
        std::cout << "Observer 2: " << observers_[1] << std::endl;
        std::cout << "----------------------------" << std::endl;

    }
};
