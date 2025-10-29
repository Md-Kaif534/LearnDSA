#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    
    int rem, ans=0;

    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=ans*10+rem;
    }
    cout<<ans;
}