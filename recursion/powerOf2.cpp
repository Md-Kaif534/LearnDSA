#include <bits/stdc++.h>
using namespace std;

int pow(int base, int n){
    if(n==2)
    return 2;

    return base*pow(base, n-1);
}

int main() {
    int base, n;
    cout<<"Enter the base: ";
    cin>>base;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<pow(base, n);
    return 0;
}