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
        if(grade < 60)
            letterGrade=scores[0];
        else 
            letterGrade=scores[(grade-50)/10];
            if(grade != 100)
            {
                if(grade%10>7)
                    letterGrade+='+';
                else if (grade%10 < 3)
                {
                    letterGrade+='-';
                }
            }
    cout << letterGrade << endl;
    system("pause");
    return 0;
    }
}