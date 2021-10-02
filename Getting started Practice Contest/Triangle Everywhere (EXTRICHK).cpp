#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && c+a>b)
	{
	    if(a==b && b==c && c==a)
	         cout<<"1"<<endl;
	    else if (a==b || b==c || c==a)
	         cout<<"2"<<endl;
	    else if(a!=b && b!=c && c!=a)
	         cout<<"3"<<endl;
	}
	else
	  cout<<"-1"<<endl;
	return 0;
}
