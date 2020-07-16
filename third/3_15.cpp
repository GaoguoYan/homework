#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    cout<< "put in a string" <<endl;
    vector<string> v1;
    string s1;
    while(cin>> s1)
    {
        v1.push_back(s1);
    }
    system("pause");
    return 0;
}
