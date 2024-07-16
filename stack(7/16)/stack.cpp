#include<iostream>
using namespace std;

int maxSize=0, size=0;

void printStack(int myStack[]){
    if(::size==0)
        cout << "\nstack is empty\n";
    else{
        cout << "\ncurrent stack: \n";
        for(int i=0; i<::size; i++)
            cout << myStack[i] << " ";
        cout << "\n";
    }
}

void push(int myStack[]){
    if(::size==::maxSize)
        cout << "\nstack is full\n";
    else{
        ::size++;
        cout << "\nenter number: ";
        cin >> myStack[::size-1];
        printStack(myStack);
    }
}

void pop(int myStack[]){
    if(::size==0)
        cout << "\nstack is empty\n";
    else{
        myStack[::size-1]=0;
        ::size--;
        printStack(myStack);
    }
}

int main(){
    
    cout << "max stack size: ";
    cin >> maxSize;

    int *myStack = new int[maxSize];

    int input;
    while(input!=4){
        cout << "\n--------\n1. push\n2. pop\n3. print\n4. end\n\nInput: ";
        cin >> input;
        cout << "\n--------\n";
        switch(input){
            case(1):
                push(myStack);
                break;
            case(2):
                pop(myStack);
                break;
            case(3):
                printStack(myStack);
            case(4):
                break;
            default:
                cout << "wrong input\n";
                break;
        }
    }

}