#include <iostream>

using namespace std;

int main(){
		long long a,b,c;
		cin >> a >> b >> c;
		if(a>=b && b>=c || a<=b && b<=c)
			cout << b << endl;
		else if(a>=c && c>=b || a<=c && b>=c)
			cout << c << endl;
		else
			cout << a << endl;
}
