#include"chapter6.h"
#include<cmath>
#include<string>

using namespace std;

//6.1.2    statement define
int fact(int val)
{
    int i =1;
    while(val>1)
    {
        return i *= val--;
    }
}
int factorial(int val)
{    
    int i;
    if (val > 1)
        return factorial(val-1) * val; 
}

double outputPar(double m)
{
    return fabs(m);
}
//6.44 6.45 define function

bool isShorter (const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
