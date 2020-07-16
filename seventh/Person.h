#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <fstream>

using namespace std;

class Person
{
    friend istream &read(istream& , Person&);
    friend ostream &print(ostream& , const Person&);
public:
    Person(string &s1, string &s2):
        name(s1),address(s2) {}

private:
    string name;
    string address;
};

istream &read(istream&, Person&);
ostream &print(ostream& , const Person&);

#endif





