#include<iostream>
using namespace std;

int maxSize=0, start=0, end=0, size=0;      // start = first node. end = last node+1

void printQueue(int myQ[]){
    if(::size==0)
        cout << "\nqueue is empty\n";
    else{
        cout << "\ncurrent queue: \n";
        for(int i=0; i<::size; i++){
            if(::start+i >= maxSize)
                cout << myQ[::start+i-maxSize] << " ";
            else
                cout << myQ[::start+i] << " ";
        }
        cout << "\n";
    }
}

void push(int myQ[]){
    if(::size==::maxSize)                          // check if full
        cout << "\nqueue is full\n";
    else{                                   // if not push
        cout << "\nenter number: ";
        cin >> myQ[::end];
        if(::end+1==maxSize)
            ::end=0;
        else
            ::end++;
        ::size++;
        printQueue(myQ);
    }
}

void pop(int myQ[]){
    if( ::size==0 )              //check if empty
        cout << "\nqueue is empty\n";
    else{                                   // if not pop
        myQ[::start]=0;
        ::start++;
        ::size--;
        printQueue(myQ);
    }
}

int main(){
    
    cout << "max queue size: ";
    cin >> maxSize;

    int *myQ = new int[maxSize];

    int input;
    while(input!=4){
        cout << "\n--------\n1. push\n2. pop\n3. print\n4. end\n\nInput: ";
        cin >> input;
        cout << "\n--------\n";
        switch(input){
            case(1):
                push(myQ);
                break;
            case(2):
                pop(myQ);
                break;
            case(3):
                printQueue(myQ);
            case(4):
                break;
            default:
                cout << "wrong input\n";
                break;
        }
    }

}