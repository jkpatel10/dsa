#include<iostream>
using namespace std;

class stack{
private :
int *arr;
int top;
int capacity;
int count;

public:
stack(int capacity){
    this->arr= new int[capacity];
    this->top = -1;
    this->capacity = capacity;
    this->count = 0;
}

void push(int element)
{
 if (this->capacity == this->count)
 {
    cout << endl << "stack is overflow !!" << endl << endl;
 }

 else
 {
   this->top++;
   this->arr[top] = element;
   this->count++;
   cout << endl << "Element inserted successfully" << endl << endl ;
 }
}

void pop()
{
 if (this->top == -1)
 {
    cout << endl << "stack is underflow !!" << endl << endl;
 }

 else
 {
   this->top--;
   this->count--;
   cout << endl << "Element deleted successfully" << endl << endl ;
 }
}

void peek()
{
 if (this->capacity == this->count)
 {
    cout << endl << "stack is empty !!" << endl << endl;
 }

 else
 {
   cout << endl << "peek element is :" << this->arr[this->top] << endl << endl ;
 }
}

void display()
{
  for (int i = this->top; i >= 0; i--)
  {
    cout << this->arr[i] << " ";
  }
  cout << endl << endl;
}

void isEmpty()
{
  if (this->top == -1)
  {
    cout << endl << "stack is empty !!" << endl << endl;
  }
  
  else{
    cout << endl << "stack is not empty !!" << endl << endl;
  }
}

void isFull()
{
 if (this->capacity == this->count)
  {
    cout << endl << "stack is full !!" << endl << endl;
  }
  
  else{
    cout << endl << "stack is not full !!" << endl << endl;
  }
}

void size()
{
  if (this->top == -1)
  {
    cout << endl << "stack is full !!" << endl << endl;
  }
  
  else{
    cout << this->count << endl << endl;
  }
}
};

int main(){

    stack Stack(3);
    int choice,element;

    do
    {
        cout << "Press 1 for push" << endl;
        cout << "Press 2 for pop" << endl;
        cout << "Press 3 for peek" << endl;
        cout << "Press 4 for display" << endl;
        cout << "Press 5 for isEmpty" << endl;
        cout << "Press 6 for isFull" << endl;
        cout << "Press 7 for size" << endl;
        cout << "Press 0 for exit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
        cout << "Enter the element : ";
        cin >> element;
        Stack.push(element);
            break;
        case 2:
        Stack.pop();
            break;
        case 3:
        Stack.peek();
            break;
        case 4:
        Stack.display();
            break;
        case 5:
        Stack.isEmpty();
            break;
        case 6:
        Stack.isFull();
            break;
        case 7:
        Stack.size();
            break;
        case 0:
        cout << "exited successfully";
            break;
        default:
        cout << "invalid choice !";
            break;
        }

    } while (choice != 0);

}