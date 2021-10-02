#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	if(n%5 == 0 && n%11 == 0)
	       cout<<"BOTH"<<endl;
	if((n%5 == 0 || n%11 == 0) && (n%5!=0 || n%11!=0))
	       cout<<"ONE"<<endl;
	if(n%5!=0 && n%11!=0 )
	       cout<<"NONE"<<endl;
	return 0;
}
