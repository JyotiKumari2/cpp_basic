/*

                     OPERATORS IN CPP

   1. Arithmetic Opertaors : 
                 binary operator : +  -  *  / % 
                 unary operator  : ++  --

                 some undefined behaviour of unary operator :
                        like : x++++x
                               x++/++x
                               x++*++x

            TYPE CASTING 
                code :
                  #include<iosteam>
                  using namespace std;
                  int main()
                  {
                      int x=10, y=20;
                      double z = x/y; // casting : (double)x/y || static<double>x/y;
                      return 0;
                  }           
            PRECEDENCE and ASSOCIATIVITY : if all operators have same precedence in an expression then 
                                           we will consider associativity


    2. Relational Operator :( < , > , == , <= , >= , != ) 
                             relational operators return boolean values

    3. Logical Operators : ( &&  ||  !)
                           returns boolean values

    4. Assignment Operator : =  +=  -= *= /= %=  
                                assignments operators have right -> left associativity
                                            

*/