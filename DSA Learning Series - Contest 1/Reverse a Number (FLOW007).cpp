#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,a;
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	long int rev=0;
	while(n>0)
	{
	    a = n % 10;
	    rev = rev*10 + a;
	    n/=10;
	}
	    cout<<rev<<endl;
	}
	return 0;
}
