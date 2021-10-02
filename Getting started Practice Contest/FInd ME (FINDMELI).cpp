#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,i,k;
	cin>>n>>k;
	int c=0;
	long long int a[n];
	for(i = 0; i<n; i++)
	{
	  cin>>a[i];   
	}
	for(i = 0; i<n; i++)
	{
	    if(a[i]==k)
	       c++;
	}
	if(c==0)
	   cout<<"-1"<<endl;
	else
	   cout<<"1"<<endl;
	return 0;
}
