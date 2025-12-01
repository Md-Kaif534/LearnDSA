#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int index, int n){
    if(index==n)
    return;

    reverseArr(arr, index+1, n);
    cout<<arr[index]<<" ";
}

int main() {
    int arr[] = {4,5,6,1,9,7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    reverseArr(arr, 0, n);
    return 0;
}