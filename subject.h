#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"

class Subject
{
public:
    virtual void subscribe(Observer* ob) = 0;
    virtual void unsubscribe(Observer* ob) = 0;
    virtual void notify() = 0;

    ~Subject() {}
};

#endif // SUBJECT_H
