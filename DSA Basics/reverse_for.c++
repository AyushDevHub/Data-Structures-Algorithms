#include <bits/stdc++.h>
using namespace std;
int main () {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array in reverse order are: ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}