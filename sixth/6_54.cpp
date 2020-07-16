#include<iostream>
#include<vector>

using namespace std;

int ponter(vector<int>::iterator, vector<int>::iterator);
int (*p)(vector<int>::iterator, vector<int>::iterator) 
        =ponter;
 