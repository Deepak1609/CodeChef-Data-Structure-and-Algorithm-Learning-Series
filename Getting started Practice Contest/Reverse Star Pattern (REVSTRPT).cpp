#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i = 1; i <=n; i++)
	{
	    for(int j =i ; j<n; j++)
	    {
	        cout<<" ";
	    }
	    for (int k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }
        cout<<endl;
	}
	return 0;
}
