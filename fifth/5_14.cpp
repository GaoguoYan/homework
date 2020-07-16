#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    string foundS;
    string maxS;
    int count=1;
    int maxCnt=1;
    cin >> foundS;
    while(cin >> s)
    {
        if(foundS==s)
        {   
            ++count;
        }
        else
        {
            count=1;      
            foundS=s;
        }
        if(count > maxCnt)
        {
            maxCnt=count;
            maxS=foundS;
        }

    }
    if(maxCnt!=1)
        cout << "have "<<maxS <<" "<<maxCnt<<endl;
    else
    
        cout<<"no continuous repeat string"<<endl;
    
    system("pause");
    return 0;
}