#include<iostream>
using namespace std;
#include<string.h>
#include<vector>

int main(){
    vector <int> arr;

    int choice;

    do
    {
        cout << "Welcome to Array Program ! " << endl;
        cout << "Press 1 to ADD An Element of Array " << endl;
        cout << "Press 2 to PRINT All Element of Array " << endl;
        cout << "Press 3 to DELETE An Element of Array " << endl;
        cout << "Press 4 to UPDATE An Element of Array " << endl;
        cout << "Press 0 to exit the Program " << endl;

        cout << "Enter your choice : " ;
        cin >> choice;

        if (choice == 1)
        {
            int element;
            cout << "Enter the element : " << endl;
            cin >> element;

            arr.push_back(element);
            cout << "Element Added Successfully ! " << endl;

        }

       else if (choice == 2)
        {
            if (arr.size() == 0)
            {
                cout << "Array is Empty ! " << endl;
            }
        
            else{
            cout << "here is the list of elements : " << endl;

           for (int a : arr)
           {
               cout << a << endl;
           }
            cout << endl;
           }
       }

        else if (choice == 3)
        {
            int index;
            cout << " Enter the index to remove the element : " ;
            cin >> index;

            if (index < arr.size())
            {
                arr.erase(arr.begin()+index);
                cout << "Element Deleted Successfully ! " << endl;
            }

            else{
                cout << "Your Index is not Valid ! " << endl;
            }
            
        }

        else if (choice == 4)
        {
            int index,value;
            cout << " Enter the index : " ;
            cin >> index;
            cout << " Enter the value : " ;
            cin >> value;
            
            arr[index] = value;
            cout << "Element Updated Successfully ! " << endl;
        }
        
    } 
    
    while (choice > 0);
}