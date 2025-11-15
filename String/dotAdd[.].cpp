#include <bits/stdc++.h>
using namespace std;

string dotsAdd(string address){
    int n= address.size()-1;
    int index=0;
    string ans;

    while(index<n){
        if(address[index]=='.')
        ans+="[.]";
        else
        ans+=address[index];
        index++;
    }
    return ans;
    
}

int main() {
    
    // string address = "1.1.1.1";
    string address = "kaif.kohli.18.king.kohli";
    cout<<dotsAdd(address);
    return 0;
}