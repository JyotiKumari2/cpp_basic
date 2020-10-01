// PROBLEMS ON OPERATORS 
/*

EXAMPLE 1: 

#include<iostream>
using namespace std;
int main()
{
    int x=5;
    bool res= (x==4) && (x++); // Short-Circuiting 
    cout<<res<<" "<<x; // output is : 0 5

    return 0;
}

EXAMPLE 2:
          :
          int main()
          {
              int x=5;
              bool res= (x==4) || (x++);
              cout<<res << " "<<x;  // OUTPUT : 0 6
          }


EXAMPLE 3:
          :
          int main()
          {
              int x=5;
              bool res=(x==5) || (x++);
              cout<<res<<" "<< x;        // OUTPUT : 1 5
          }


EXAMPLE 4: 
         :
         ************COMMA OPERATOR****************
           -Comma operator has left to right associativity
           -Comma operator has lowest precedence

           #include<iostream>
           using namespace std;
           int main()
           {
               int x=1, y=2, z=3, a;
               a=(x , y , z);        /////OUTPUT is 3
                
               a = x,y,z;           ///// OUTPUT is 1 bcs assignment operator has highest priority tha
                                                  than comma operator

               return 0;
           }

EXAMPLE 5:
            :
            int main()
            {
                int x=1 ,y=20 , z=30;
                 if(x>y>z)  // left to right associativity
                   cout<<x;
                 else
                   cout<<y;   // output is   y
                
                return 0;
            }

*/