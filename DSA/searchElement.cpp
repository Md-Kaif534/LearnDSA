#include <iostream>
using namespace std;

int main() {
    int arr[5] = {23, 45, 32, 42, 13};
    int index = 4;
    int element = 13;

    for(int i=0; i<5; i++)
    {
        if(arr[i]== element)
        // index = i;
        cout<<index;
    }
    // cout<<index;
    return 0;
}