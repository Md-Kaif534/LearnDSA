#include <bits/stdc++.h>
using namespace std;

void printOdd(int n){
    if(n==0) return;
    printOdd(n-1);

    if(n%2!=0)
    cout<<n<<" ";
}

int main() {
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    
    printOdd(n);
    return 0;
}