#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date
{
public:
    Date() {}
    Date(int d,int m, int y);

    std::string getDate();

    bool isValidDate();

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
