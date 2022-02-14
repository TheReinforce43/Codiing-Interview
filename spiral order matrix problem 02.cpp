#include<bits/stdc++.h>

using namespace std;


int main()
{
    freopen("input.txt","r",stdin);

    int m,n;
    cin>>m>>n;
    int mat[m][n], A=0,B=0,L=m-1,R=n-1,pos=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }


    while( (A<=L) && (R>=B))
    {
        if(pos==0)
        {
            for(int i=A;i<=R;i++)
                cout<<mat[A][i]<<" ";
            A++;
            pos=1;
        }
        else if(pos==1)
        {
            for(int i=A;i<=L;i++)
                cout<<mat[i][R]<<" ";
            R--;
            pos=2;
        }
        else if(pos ==2)
        {
            for(int i=R;i>=B;i--)
                cout<<mat[L][i]<<" ";
            pos=3;

            L--;
        }
        else if(pos==3)
        {
            for(int i=L;i>=A;i--)
                cout<<mat[i][B]<<" ";
            pos=0;
            B++;
        }
    }
    return 0;
}
