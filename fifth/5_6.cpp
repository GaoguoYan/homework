#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int grade;
    const vector<string> scores{"F","D","C","B","A","A++"};
    string letterGrade;
    while(cin >> grade)
    {
        grade < 60 ? letterGrade=scores[0] : letterGrade=scores[(grade-50)/10];
    }
    cout << letterGrade << endl;
    system("pause");
    return 0;
}