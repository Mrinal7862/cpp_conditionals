#include <iostream>

using namespace std;

int main(){
float num1;
 float num2;
 char operation;
 cout<<"Welcome to the calculator\n";

 cout<<"Choose a number: ";
 cin>>num1;

 cout<<"Choose another number: ";
 cin>>num2;

 cout<<"Choose a mode of operation: ";
 cin>>operation;

 switch (operation){
     case '+':
     cout<<num1+num2;
     break;

     case '-':
     cout<<num1-num2;
     break;

     case '*':
     cout<<num1*num2;
     break;

     case '/':
     if(num2 == 0){
         cout<<"zero division error";
     }
     else{
         cout<<num1/num2;
     }
     break;

     default:
     cout<<"Please enter a valid operation...";
     }

    return 0;
}