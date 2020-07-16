#ifndef CHAPTER6_H
#define CHAPTER6_H

//6.1.2 statement function
int fact(int);
int factorial(int);
double outputPar(double);

//6.3.3 statement function
//string (*arrPrint(string arr[10])) [10];
//auto arrPrint(string arr)->string(*)[10];
//string a;
//decltype(a) *arrPrint(string arr[10]);

//6.44 statement function
//rewrite inline function
//inline bool
//isShorter(const string& ,const string&);

//6.45 statement function
constexpr bool isShorter(const string& ,const string&);

#endif