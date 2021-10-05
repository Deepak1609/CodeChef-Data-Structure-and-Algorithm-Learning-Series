#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long maxp(long long arr[], long long n){
sort(arr, arr+n);
long long ans = arr[0];
for(long long i=0; i<n; i++){
    ans=max(ans,arr[i]*(n-i));
}
cout<<ans;
}

int main() {
long long n;
cin>>n;
long long arr[n];
for(long long i=0; i<n; i++){
    cin>>arr[i];
}
maxp(arr, n);
return 0;
}
