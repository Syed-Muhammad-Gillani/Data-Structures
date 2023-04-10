#include <iostream>
using namespace std;

class stack
{
    int *top, *stk;
    int size = 0;

    public:

        stack()
        {
            top = NULL;

            cout << "\nEnter Stack (Array) size: ";
            cin >> size;

            stk = new int[size];
        }

        void push( int x)
        {
            // Inserting first item to stack
            if ( top == NULL)
            {
                top = stk;
                *top = x;
                return;
            }

            // If stack ( array) is full
            if ( top == stk + ( size - 1))
            {
                cout << "\nStack overflow." << endl;
                return;
            }

            // Increment top and store new value into it
            top++;
            *top = x;
        }

        void pop()
        {
            // Stack is empty
            if ( top == NULL)
            {
                cout << "\nStack underflow." << endl;
                return;
            }

            // Stack has only one value stored
            if ( top == stk)
            {
                top = NULL;
                return;
            }

            // Decrement top ( previous top value is not garbage value)
            top--;
        }

        void peek()
        {
            cout << "\n" << *top << endl;
        }

        void print()
        {
            while ( top != NULL)
            {
                cout << *top << "\t";
                pop();
            }
        }
};

int main()
{
    stack s1;
    s1.push( 1);
    s1.push( 2);
    s1.push( 3);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.push( 12332);
    s1.push( 12312333);
    s1.print();
    s1.pop();
}