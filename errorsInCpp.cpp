/*

                                  NOTES 
   ERRORS IN CPP
      1.Syntax Error 
      2.Semantic Error
      3.Linker Error
      4.Runtime Error
      5.Logical Error

    COMPILATION PROCESS:
          When we compile a program there are many things that happens 
            eg: It is preprocessed first , preprocess directive process first then it is compiled
                -after that BINARY CODE generated and then,
                -linking of functions happens
                -the functions that we are linking might bether in the same file or might be in the other files
                -once linking is done ....
                -Executable file is generated and we see the output
                -Now errors may occur in different sections of files execution and compilation.

    SYNTAX ERROR : if program do not follow syntax of the program then it shows SYNTAX ERRORS
                   eg: if we forgot to end the statement with ;
                       if we forgot to close the curly braces;
                       etc...

    SEMANTIC ERRORS: occurs when our statement doesnot make any sence.
                    eg : 16=x;

    LINKER ERROR : occuring in linking phase 
                   eg: if we are calling a function and function definition is 
                       not present then it shows LINKER ERROR

    RUNTIME ERROR : occurs when our program is running
                    most dangerous error

                    pointer is not initialising and doing dereferecing shows runtime errors
                    eg : x/y and if user input y=0 
                         then it shows runtime error
                         
                         SEGMENTAION FAULT and RUNTIME ERROR are very dangerous in cpp which is very difficult 
                         to debug

    LOGICAL ERROR :
                   occurs when logic is false
                    eg : if(x=y)// This type of error doesnot occurs in JAVA 
*/

