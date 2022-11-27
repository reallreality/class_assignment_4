/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Stack definitions
**********************/


//Including needed header file
#include "Stack.h"      


//Constructor
Stack::Stack() {        

    top = -1;

}


//push function definition
bool Stack::push(int element) {         
    
    bool didExecute = false;

    if (top < (SIZE - 1)) {             

        top++;
        
        
        stack[top] = element;

                   

        didExecute = true;

    }

    else {

        didExecute = false;

    }

    return didExecute;       

}


//pop function definition
int Stack::pop() {             

    int poppedElement = '\0';
    
    if (top != -1) {

        poppedElement = stack[top];
        
        top--;

    }

    else {

        poppedElement = '\0';


        throw ("Underflow error - Nothing in stack to pop");      //using a 'throw' in order to inform user of underflow exception

    }

    return poppedElement;

}


//peek function definition
int Stack::peek() {
    
    int peekElement = '\0';
    
    if (top != -1) {

        peekElement = stack[top];

    }

    else {

        peekElement = '\0';


        throw ("There is nothing in the stack to peek at");      //using a 'throw' in order to inform user of underflow exception

    }

    return peekElement;

}


//isEmpty function definition
bool Stack::isEmpty() {

    bool isStackEmpty = false;
    
    if (top == -1) {

        isStackEmpty = true;

    }

    else {

        isStackEmpty = false;

    }

    return isStackEmpty;

}

