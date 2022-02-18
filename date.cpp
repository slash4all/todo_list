#include "date.h"
#include <exception>
#include "myexceptions.h"

Date::Date(int d, int m, int y)
{
    this->day = d;
    this->month = m;
    this->year = y;
    if (!(this->isValidDate()))
        throw NotValidDateException( d, m, y);

}


std::string Date::getDate(){
    std::string date = "";
    if(this->month < 10)
         date = std::to_string(day) + "/" + "0" + std::to_string(month) + "/" + std::to_string(year);
    else
        date = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);

    return date;
}


bool Date::isValidDate(){
    if (this->day < 1 || this->month < 1 || this->month >12 || this->year < 0 )
        return false;
    if (this->month != 2){
        if(this->month != 11 && this->month != 4 && this->month != 6 && this->month != 9){
            if(this->day <= 31)
                return true;
            else
                return false;
        }
        else{
            if(this->day <= 30)
                return true;
            else
                return false;
        }
    }
    else{
        if (this->day <= 28)
            return true;
        else
            return false;
    }
}
