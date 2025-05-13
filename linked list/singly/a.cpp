#include<iostream>
using namespace std;
#include<string.h>
#include<vector>

class node{
    public:
        int data;
        node *next;
};

int main(){
    node *head = NULL;

    head = new node();
    head->data = 25;
    head->next = NULL;

    node *n2 = NULL;

    n2 = new node();
    n2->data = 20;
    n2->next = NULL;

    head->next = n2;

    node *n3 = NULL;

    n3 = new node();
    n3->data = 60;
    n3->next = NULL;

    n2->next = n3;

    cout << head->data << " " << head->next << endl;
    cout << n2->data << " " << n2->next << endl;
    cout << n3->data << " " << n3->next << endl;
}