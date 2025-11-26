#include <bits/stdc++.h>
using namespace std;

int sumOfSquare(int n){
    if(n==1)    // base case
    return 1;

    return n*n+sumOfSquare(n-1);  //recursive case
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<sumOfSquare(n);
    return 0;
}