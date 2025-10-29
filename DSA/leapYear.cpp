#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter your Year: ";
    cin>>num;

    if(num%400==0)
    cout<<"Leap Year";
    else if(num%4==0 && num%100!=0)
    cout<<"Leap Year";
    else
    cout<<"Not Leap year";
}