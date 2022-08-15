// manipulators in formatting of data to be displayed. Ex - endl, setw

#include<iostream>
#include<iomanip>

using namespace std;

const int a = 45; //global constant variable

void using_setw(){
    int a = 10, b = 200, c = 3000;
    cout << "The value of a is : " << a <<endl; 
    cout << "The value of b is : " << b <<endl; 
    cout << "The value of c is : " << c <<endl; 

    cout<<"The value of a is : " << setw(4) << a <<endl; 
    cout<<"The value of b is : " << setw(4) << b <<endl; 
    cout<<"The value of c is : " << setw(4) << c <<endl; 

}

int main(int argc, char const *argv[])
{
    using_setw();
    return 0;
}
