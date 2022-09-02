#include<iostream> 
#include <string>
using namespace std; 

string check_palindrome()
{
    char ch;
    int mid,n;
    string str;
    cout <<"You want to enter a string(s) or a no(n) : ";
    cin >> ch;
    switch (tolower(ch))
    {
   case 's':
        {
        cout << "\nEnter the string: ";
        cin >> str;
        for (int i = 0; i <= str.length()/2; i++)
        {
            if(str[i]!=str[str.length()-i-1])
            {
                return "\n Not a palindrome";
            }
        }
        return "\n A palindrome";
        }
        break; //unnecessary as after returning a value, function comes to a halt from executing any further


    case 'n':
       { 
        cout<<"\nEnter the no: ";
        cin >> n;
        int rev = 0,num = n, rem;
        while (n)
        {
            rem = n%10;
            rev = (rev*10) + rem;
            n = n/10;
        }
        if(rev == num) return "\n A palindrome";
        else return "\n not a palindrome";
       }
       break;

    default : 
       { 
        cout << "Not a valid choice";
        return 0;
        }
        
    
    }
}

int main() 
 { 
    int n;
    cout << check_palindrome();
    return 0; 
}