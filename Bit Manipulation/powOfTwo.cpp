#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;

    
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // cout<<isPowerOfTwo(n);
    if(isPowerOfTwo(n))
    cout << "Yes, power of 2";
else
    cout << "No, not power of 2";

    return 0;

}