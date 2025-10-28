#include <iostream>
using namespace std;

int main() {
    int arr[6] = {23, 12, 10, 78, 16, 56};

    //largest element

    int ans = arr[0];
    for(int i=0; i<6; i++)
    {
        if(arr[i]>ans)
        ans= arr[i];
    }

    //second largest element

    int secondLargest = arr[0];
    for(int i=0; i<6; i++)
    {
        if(arr[i]!=ans)
        secondLargest=max(arr[i], secondLargest);
    }
    cout<<secondLargest;
}