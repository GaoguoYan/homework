#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int grade;
    vector<int> scores(11,0);
    auto it=scores.begin();
    while(cin >> grade)
    {
        if(grade <=100)
        {    it = it+grade/10;
            (*it)++;
        }
    }
    for (auto i :scores)
        cout << i << endl;
    system("pause");
    return 0;
}