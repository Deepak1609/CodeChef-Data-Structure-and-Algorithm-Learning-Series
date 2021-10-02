#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long int n, sumO=0,sumE=0;
	cin>>n;
	for(int i =1; i<=n*2;i++ )
	{
	    if(i%2==0)
	        sumE+=i;
	    if(i%2!=0)
	        sumO+=i;
	}
	cout<<sumO<<" "<<sumE<<endl;
	return 0;
}
