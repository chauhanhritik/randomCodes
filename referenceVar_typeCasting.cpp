#include<iostream>
using namespace std;

int c = 45; // global variable called using scope resolution operator

void global_operator(){
    int a , b , c ;
    cout<<"Enter the first var : ";
    cin>> a ;
    cout<<"\n Enter the second var : ";
    cin >> b;
    c = a + b ;
    cout << "\n The value of local var c is : "<<c;
    cout << "\n Accessing the global var c : "<<::c;
}
void reference_variable(){
     float var1 = 56.6;
    cout << "\n Var1 = "<< var1;
    float &y = var1; // Y is a reference variable pointing to var1
    cout << "\n Y = var1 = "<<y; 
}

void  typecasting(){
    float a = 56.4;
    cout << "The value of a with typecasting : " << int(a);
    // cout << "The value of a with typecasting : " << (int)a; --> this syntax is also correct
}

int main()
{
    // global_operator();
    
    // Reference Variable
    // reference_variable();

    // typecasting of variables
    typecasting();
    return 0;
}
