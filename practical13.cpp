
/*
Step 1- Start the program.
Step 2- Declare a template class Stack with one template type placeholder X which is used to define the datatype the stack will store.
Step 3- in it's private data types, define a pointer variable "arr" to X template type, and two int variables, namely, top and capacity.
Step 4- in the public functions, define a constructor which takes an int size variable as a function argument, give the argument a default value of 10. In the constructor, dynamically allocate a new array of data type X and size equal to the argument variable size and set the arr pointer variable to point at this array.
Set the variable "capacity" to the size of the array and set the variable "top" = -1.
Step 5- Implement the pop() function, which returns the top element of the stack and reduces it's size by 1 by removing the top most element.
Step 6- Implement the push(X var) function, which takes in an argument of template type X and pushes it onto the stack.
Step 7- Implement the peek() function, which only display the top value of the stack but doesn't delete anything from the stack.
Step 8- Implement the isEmpty() boolean function which returns true if top == -1, which means the stack is empty.
Step 9- Implement the isFull() boolean function which returns true if top == capacity - 1, which means the stack has reached its full capacity.
Step 10- Implement the size() function which returns top + 1, which is equal to the current occupied size of the stack.
Step 11- In the main function, create a Stack of the desired data type such as int, string etc and pass the desired size as an argument.
Step 12- Test it using different function calls.
Step 13- Exit the program.
*/
#include <iostream>
using namespace std;

#define SIZE 10

template <class X>
class Stack
{
    X* arr;
    int top;
    int capacity;
public:
    Stack(int size = SIZE);
    void push(X);
    X pop();
    X peek();

    int size();
    bool isEmpty();
    bool isFull();
};

template <class X>
Stack<X>::Stack(int size)
{
    arr = new X [size];
    capacity = size;
    top = -1;
}

template <class X>
void Stack<X>::push(X x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}

template <class X>
X Stack<X>::pop()
{
    if (isEmpty())
    {
        cout << "\nStack is empty bro.\n";
        exit(EXIT_FAILURE);
    }
    return (arr[top--]);
}

template <class X>
X Stack<X>::peek()
{
    if(isEmpty())
    {
        cout << "\nStack is empty.\n";
        exit(EXIT_FAILURE);
    }
    return arr[top];
}

template <class X>
int Stack<X>::size() {
    return top + 1;
}

template <class X>
bool Stack<X>::isEmpty() {
    return top == -1;
}

template <class X>
bool Stack<X>::isFull() {
    return top == capacity - 1;     // or return size() == capacity;
}
int main()
{
    Stack<string> pt(2);
 
    pt.push("A");
    pt.push("B");
 
    cout << "popping " << pt.pop() << endl;
    cout << "popping " << pt.pop() << endl;
    pt.push("C");
 
    // Prints the top of the stack
    cout << "The top element is " << pt.peek() << endl;
 
    // Returns the total number of elements present in the stack
    cout << "The stack size is " << pt.size() << endl;
 
 
    // check if the stack is empty or not
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
 
    return 0;
}