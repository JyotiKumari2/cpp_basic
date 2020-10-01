//Basic input/output using cout and cin
/*Buffering
  enter a:
  10 20
  enter b:
  The value of a is :10
  The value of b is :20
*/
/* 
IMPORTANT::
   The difference between \n & endl
     used for new line
     endl also flashes the buffer while \n simply put the newline

*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"\nEnter b:";
    cin>>b;
    cout<<"The value of a is :"<<a;
    cout<<"\nThe value iof b is :"<<b;
    return 0;
}