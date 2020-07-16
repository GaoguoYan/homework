#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2;
    int i;    

    while(cin >> i)
        v.push_back(i);
  
    //the sum two number next to each other
    //for(int j =0 ; j!= v.size()-1 ; j++) 
        //cout << v[j]+v[j+1] << endl;

    for( int i = 0;i!= v.size()/2;i++)
       cout << v[i]+ v[v.size()-i-1]<<endl;

    system("pause");
    return 0;
}