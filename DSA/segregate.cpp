#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {0,1,1,0,0,1,1};

    sort(v.begin(), v.end() );

    for(int x:v)
    cout<<x<<" ";
    return 0;
}