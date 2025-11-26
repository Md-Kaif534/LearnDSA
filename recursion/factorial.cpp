#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    // base case
    if(n==1 || n==0)
   {
     return 1;
   }

    return n*fact(n-1);
}

int main() {
    long long n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<0){
        cout<<"factorial is not calculated ";
    }

    cout<<fact(n);
    return 0;
}