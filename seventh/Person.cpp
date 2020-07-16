#include <iostream>
#include "Person.h"

using namespace std;

istream& read(istream &is, Person &p1)
{
    is >> p1.name >> p1.address;
    return is;
}
ostream& print(ostream &os, const Person &p2)
{
    os << p2.name <<" "<< p2.address <<endl;
    return os;
}

