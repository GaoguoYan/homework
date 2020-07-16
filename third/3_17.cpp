#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> v;
    string s;
    while(cin>> s)
        v.push_back(s);
    for(auto &i : v)
    {                                         //i is type of string
        for (auto &j :i)                      //j is type of char, toupper(c)
        j =toupper(j);
    }
    for(auto i : v)
    cout << i <<endl;
    system("pause");
    return 0;

}