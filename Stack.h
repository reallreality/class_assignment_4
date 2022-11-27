/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Header file for Stack.cpp class file 
**********************/


//Necessary ifndef, define needed for header file
#ifndef CLASSES_STACK_H         
#define CLASSES_STACK_H


//Defining constant for array size
#define SIZE 10          


//Class 'Stack' prototype
class Stack {       

    public:

        Stack();

        bool push(int);

        int pop();

        int peek();

        bool isEmpty();
    
    
    private:
    
        int top;

        int stack[SIZE];


};


#endif  //CLASSES_STACK_H