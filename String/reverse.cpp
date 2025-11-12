#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter your string: ";
    getline(cin, s);
    
    int start=0, end=s.size()-1;

    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;

    }
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    return 0;
}