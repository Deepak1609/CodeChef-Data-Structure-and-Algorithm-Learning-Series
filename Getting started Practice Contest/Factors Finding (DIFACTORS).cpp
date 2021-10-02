#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n,c=0,j=0;
    cin>>n;
    long int a[1000000];
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
            a[j]=i;
            j++;
        }
    }
    cout<<c<<endl;
    for(j = 0;j<c;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
