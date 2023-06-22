#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int a[n];
            for(int i=0;i<n-1;i+=2)
            {
                a[i]=n-i;
                a[i+1]=i+1;
            }
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}