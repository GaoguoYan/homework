#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto & i : v)
        i%2==0 ? i=i : i=i*2;
    for(auto j : v)
        cout << j << endl;
    system("pause");
    return 0;
}