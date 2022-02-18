#ifndef TODOSCHEDULE_H
#define TODOSCHEDULE_H

#include "observer.h"
#include "task.h"
#include <vector>


class ToDoSchedule: Observer
{
public:
    ToDoSchedule();

    void update() override;
    void attach() override;
    void detach() override;


private:
    Task* subject;
    std::vector<Task*> schedule;
};

#endif // TODOSCHEDULE_H
