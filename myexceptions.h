#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H

#include <exception>
#include "date.h"

class NotValidDateException: public std::runtime_error {
public:
    NotValidDateException(int d, int m, int y): std::runtime_error("this date is not valid: " +
                                                                   std::to_string(d) + "/" + std::to_string(m) + "/" + std::to_string(y)) {}
};

#endif // MYEXCEPTIONS_H
