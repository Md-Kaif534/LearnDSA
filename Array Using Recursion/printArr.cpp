#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int index, int n){
    if(index==n)
    return;

    cout<<arr[index]<<" ";
    printArr(arr, index+1, n);
}

int main(){
    int arr[] = {2, 4, 6, 1, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printArr(arr, 0, n);
    return 0;
}