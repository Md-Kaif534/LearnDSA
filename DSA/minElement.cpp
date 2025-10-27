#include <iostream>
using namespace std;

int main() {
    int arr[5] = {24, 48, 15, 10, 76 };
    int smallest= arr[0];

    for(int i=0; i<5; i++)
    {
        if(smallest>arr[i])
        smallest= arr[i];
    }

    cout<<smallest;
    return 0;
}