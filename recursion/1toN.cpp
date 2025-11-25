#include <bits/stdc++.h>
using namespace std;

void print1toN(int num, int N){
    if(num==N)
    // cout<<num<<" ";
    return;

    cout<<num<<" ";
    print1toN(num+1, N);
}

int main() {
    int num, N;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Enter the last Number: ";
    cin>>N;

    print1toN(num,N);
    return 0;
}