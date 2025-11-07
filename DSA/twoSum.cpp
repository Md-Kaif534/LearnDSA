#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {2,4,5,1,5,3,10};
    int target = 13;
    vector <int> ans;

    for(int i=0; i<7; i++){
        for(int j=i+1; j<=7; j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;
            }
        }
    }
    for(int x:ans)
    cout<<x<<" ";
    return 0;
}