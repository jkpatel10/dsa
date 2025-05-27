#include<iostream>
using namespace std;

int main(){
    int n;
    int element;

    cout << "enter the number of elements in array : ";
    cin >> n;

    int arr[n];

     for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i+1 << " element : ";
        cin >> arr[i];    
    }

    cout << "enter the element to find : ";
    cin >> element;

    for (int i = 0; i < n; i++)
    {
    if (arr[i] == element)
    {  
        cout << "element found on index :" << i;
    }
    
    else
    {
        cout << "element is not in array";
    }

    }
} 