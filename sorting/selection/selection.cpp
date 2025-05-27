#include<iostream>
using namespace std;

int main(){
    
    int num;

    cout << "Enter the number of element in array : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
        cout << endl;
    }
    
    for (int i = 0; i < num-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < num; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }  
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    
    for (int a : arr)
    {
       cout << a << " ";
    }

} 