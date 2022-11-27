/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* A program that gives an introductory understanding of
* the ADT (abstract data type) known as "stacks"
**********************/


//Including header file appropiate for main.cpp
#include "main.h"       


//Main function
int main(int argc, char** argv) {  

    srand((unsigned) time(NULL));   //For our random number generator in switch statement


    //Creating a stack object
    Stack stack;  

    
    //Couple of basic tests when trying to understand ADT
    std::cout << "Initial usage trying out member functions" << std::endl;

    
    //The following statements are all for testing/debugging purposes
    try {

        //Trying to call peek function. If a INT is returned, the last item put in the stack is displayed
        std::cout << stack.peek() << std::endl;

    }


    catch (const char* noPeek) {

        //Handeling potential exception here. This means there is nothing in the stack. The thrown exception will be printed to the screen
        std::cout << noPeek << std::endl;

    }


    try {

        //Trying to call pop function. If an INT is the output then operation was WAS successful.
        //The last int put into the stack is returned and top was decremented by 1. If the operation 
        //was NOT successful, an exception is thrown
        std::cout << stack.pop() << std::endl;

    }


    catch (const char* underflow) {

        //Handeling potential exception here. The thrown exception will be printed to the screen
        std::cout << underflow << std::endl;

    }


    //Calling isEmpty function. This will return a 0 if the stack IS NOT empty, and will return a 1 if
    //the stack IS EMPTY
    std::cout << '\n' << stack.isEmpty() << std::endl;




    //Using loops to push ints to stack
    std::cout << '\n' << "Using a for loop to push" << '\n' << std::endl;

    
    //Using for loop in order to initialize 'stack' pushing past 'stack' size maximum
    for (int x = 0; x < (TESTSIZE * MULTIPLIER); x++) {


        //Pushing an int to 'stack'. 1 will be returned if successful and 0 will be returned if failed
        std::cout << stack.push(x) << std::endl;


        try {

            //Trying to call peek function. If a INT is returned, the last item put in the stack is displayed
            std::cout << stack.peek() << std::endl;

        }


        catch (const char* noPeek) {

            //Handeling potential exception here. This means there is nothing in the stack. The thrown exception will be printed to the screen
            std::cout << noPeek << std::endl;

        }


    }


    //Using loop to pop
    std::cout << '\n' << "Using a for loop to pop" << '\n' << std::endl;


    //Lets try this a bunch of times now for pop
    for (int x = 0; x < (TESTSIZE * MULTIPLIER); x++) {


        try {

            //Trying to call pop function. If an INT is the output then operation was WAS successful.
            //The last int put into the stack is returned and top was decremented by 1. If the operation 
            //was NOT successful, an exception is thrown
            std::cout << stack.pop() << std::endl;

        }


        catch (const char* underflow) {

            //Handeling potential exception here. The thrown exception will be printed to the screen
            std::cout << underflow << std::endl;

        }


    }
    

    //Calling peek function and isEmpty function
    std::cout << '\n' << "A peek and isEmpty function call" << std::endl;


    //Peeking and checking if stack isEmpty
    try {


        //Trying to call peek function. If a INT is returned, the last item put in the stack is displayed
        std::cout << stack.peek() << std::endl;


    }


    catch (const char* noPeek) {


        //Handeling potential exception here. This means there is nothing in the stack. The thrown exception will be printed to the screen
        std::cout << noPeek << std::endl;


    }


    //Calling isEmpty function. This will return a 0 if the stack IS NOT empty, and will return a 1 if
    //the stack IS EMPTY
    std::cout << stack.isEmpty() << std::endl;




    //Using a switch statement in order to randomly call member functions in different 
    //orders and combinations
    std::cout << '\n' << "Using a switch statment" << '\n' << std::endl;


    //Using a switch statement inside of a for loop in order to randomly test different member function calls
    for (int x = 0; x < SWITCHSIZE; x++) {


        //Initializing a randomly generated int in order to make case selections
        int caseNum = std::rand() % 3 + 1;


        //Displaying to the user what case has been entered based on the randomly generated int
        std::cout << '\n' << '\n' << "you have entered case " << caseNum << std::endl;


        //Switch statement body and cases
        switch(caseNum) {


            case 1:


                std::cout << "This case initializes stack with push() and shows 0 for unsuccessful and 1 for successful " <<
                "then checks if stack isEmpty" << std::endl;


                //For loop header
                for (int x = 0; x < (TESTSIZE * MULTIPLIER); x++) {

                    //Pushing an int to 'stack'. 1 will be returned if successful and 0 will be returned if failed
                    std::cout << stack.push(x) << std::endl;

                }
                

                //Calling isEmpty function. This will return a 0 if the stack IS NOT empty, and will return a 1 if
                //the stack IS EMPTY
                std::cout << '\n' << stack.isEmpty() << std::endl;


                //Breaking out of case
                break;


            case 2: 

                std::cout << "This case will use a loop to pop() from stack and tries to throw an underflow error" << std::endl;


                for (int x = 0; x < (TESTSIZE * MULTIPLIER); x++) {


                    try {


                        //Trying to call pop function. If an INT is the output then operation was WAS successful.
                        //The last int put into the stack is returned and top was decremented by 1. If the operation 
                        //was NOT successful, an exception is thrown
                        std::cout << stack.pop() << std::endl;


                    }


                    catch (const char* underflow) {


                        //Handeling potential exception here. The thrown exception will be printed to the screen
                        std::cout << underflow << std::endl;


                    }


                }

                break;


            case 3:

                std::cout << "This case calls isEmpty, pop, isEmpty, and peek respectively." << std::endl;
                
                
                //For loop header
                for (int x = 0; x < TESTSIZE * MULTIPLIER; x++) {

                    //Calling isEmpty function. This will return a 0 if the stack IS NOT empty, and will return a 1 if
                    //the stack IS EMPTY
                    std::cout << stack.isEmpty() << std::endl;

                    //Try statement
                    try {

                    
                    //Trying to call pop function. If an INT is the output then operation was WAS successful.
                    //The last int put into the stack is returned and top was decremented by 1. If the operation 
                    //was NOT successful, an exception is thrown
                    std::cout << stack.pop() << std::endl;


                    }

                    //Catch statement
                    catch (const char* underflow) {

                        //Handeling potential exception here. The thrown exception will be printed to the screen
                        std::cout << underflow << std::endl;


                    }


                    //Calling isEmpty function. This will return a 0 if the stack IS NOT empty, and will return a 1 if
                    //the stack IS EMPTY
                    std::cout << stack.isEmpty() << std::endl;


                    //Try statement
                    try {

                        //Trying to call peek function. If a INT is returned, the last item put in the stack is displayed
                        std::cout << stack.peek() << std::endl;


                    }

                    //Catch statement
                    catch (const char* noPeek) {

                        //Handeling potential exception here. This means there is nothing in the stack. The thrown exception will be printed to the screen.
                        std::cout << noPeek << std::endl;


                    }

                    std::cout << std::endl;
                    

                }

                break;
      
        }

    }

    return 0;

}