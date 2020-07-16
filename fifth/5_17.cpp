#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{0,1,1,2};
    vector<int> v2{0,1,1,2,3,5,8};

    int v1Size=v1.size();
    int v2Size=v2.size();
    if(v1Size<v2Size)
    {
        for(int i=0;i < v1Size;i++)
        {
            if(v1[i]==v2[i])
                cout << true<<endl;
            else
                cout <<false<<endl;
        }   
    }
    else
    {
       for(int i=0;i < v2Size;i++)
        {    
            if(v2[i]==v1[i])
                 cout << true<<endl;
            else
                cout <<false<<endl;
        }
    }
    system("pause");
    return 0;
    
}