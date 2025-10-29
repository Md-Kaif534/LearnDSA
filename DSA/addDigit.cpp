#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>=10){
        int rem, ans=0;

    while(num!=0) {
        rem=num%10;
        num=num/10;
        ans=ans+rem;
    }
    num=ans;
}
    cout<< num;
}
