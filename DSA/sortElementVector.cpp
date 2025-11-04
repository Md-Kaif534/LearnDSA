#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> n;
    n.push_back(20);
    n.push_back(60);
    n.push_back(64);
    n.push_back(10);
    n.push_back(25);
    n.push_back(5);

    // increasing order
    cout<<"Increasing Order"<<endl;
    sort(n.begin(), n.end());
    for(int i=0; i<n.size(); i++)
    cout<<n[i]<<" ";
    cout<<endl;

    // decreasing order
    cout<<"Decreasing order"<<endl;
    sort(n.begin(), n.end(), greater<int>());
    for(int i=0; i<n.size(); i++)
    cout<<n[i]<<" ";
}