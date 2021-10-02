#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i = 0; i <n; i++)
	{
	    cin>>a[i];
	}
	for(int i = n-1; i>=0; i-- )
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
