#include <bits/stdc++.h>
using namespace std;

void birthdayCountDown(int days){
    // base case
    if(days<=0){
        cout<<"Happy Birthdays to you"<<endl;
        return;
    }

    // recursive case
    cout<<days<<" Days left yout birthday"<<endl;
    birthdayCountDown(days-1);
}

int main(){
    birthdayCountDown(30);
    return 0;
}