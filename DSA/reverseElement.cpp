#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 5, 4, 8, 2,7};
    int n=6;
    int start=0, end=n-1;

    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];

        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";
}