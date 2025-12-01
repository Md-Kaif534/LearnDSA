#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int index, int n){
    if(index == n)
        return 0;

    return arr[index] + sumArr(arr, index + 1, n);
}

int main(){
    int arr[] = {3, 4, 5, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumArr(arr, 0, n);
    cout << "Sum = " << result;

    return 0;
}
