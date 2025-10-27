#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {23, 45, 24, 10, 56};
    int largest = arr[0];

    for(int i=0; i<5; i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }

    cout<<largest;

    return 0;
    
}