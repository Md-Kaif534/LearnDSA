#include <bits/stdc++.h>
using namespace std;

void printEven(int n){
    if(n==0) return;
    printEven(n-1);

    if(n%2==0)
    cout<<n<<" ";
}

int main() {
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    
    printEven(n);
    return 0;
}