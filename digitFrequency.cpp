// counting occurence of a digit in a number
#include<iostream> 

using namespace std; 
void frequency()
{   int n, freq = 0;
    long long int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "\n Enter the digit you want to find the occurence of : ";
    cin >> n;
    while(num)
    {
        if(num%10 == n) ++freq;
        num = num/10;
    }
    cout << "\n Freq of " << n << " is : "<<freq;

}

int main() 
 { 
    frequency();
    return 0; 
}