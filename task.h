#ifndef TASK_H
#define TASK_H

#include "subject.h"
#include "date.h"
#include <iostream>
#include <list>

class Task: public Subject
{
public:
    Task(): date(Date(1,2,3)){
        {
            date = Date(1,2,3);
        }
    }
    ~Task() {}

    void write(std::string note){
        text = note;
    }

    void edit();

    void save(std::string note){
        this->write(note);
        this->notify();
    }

    void subscribe(Observer* ob) override;
    void unsubscribe(Observer* ob) override;
    void notify() override;

private:
// aggiungere attributo per la data
    std::string name;
    Date date;
    bool checked = {false};
    std::string text;
    std::list<Observer*> observers;
};

#endif // TASK_H
