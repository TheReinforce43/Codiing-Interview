#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("input.txt","r",stdin);
    vector<int> v;

    int N;
    cout<<"enter the range of value\n";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>:: iterator it=v.begin();
    for (int i=0;i<v.size();i++)
    {
        int j=i+1;
        while( j<v.size() && v[i]==v[j])
        {

            v.erase(v.begin()+j);
        }
    }

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
