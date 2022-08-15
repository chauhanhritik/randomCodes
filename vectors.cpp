#include<iostream>
#include<vector>
 
 using namespace std;

 template <class T>

 void display(vector<T> &vec1){ //T is a class template and has been used here so that a vector of any data type be passed into display function.

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] <<" ";
    }
    cout<<endl;

 }
  int main(int argc, char const *argv[])
  {
    //Below is a zero length vector
    vector<int> vec1;  //vectors manage the size automatically unlike arrays, thus no limit to no of elements we can add, tho limited by the memory
    
    vector<char> vec2(4); //vector of length 4.
    display(vec2); // passes without error as class template has been used in function heading

    vector<char> vec3(vec2); // 4 element char vector from vec2

    vector<int> vec4(6,3); // it will store 3 in vec4 6 times.
    int element;

    for (int i = 0; i < 4; i++)
    {
       cout<<"\nEnter an element : \n";
       cin>>element;
       vec1.push_back(element); //adds element at the end

    }
    
    display(vec1);    
    
    vec1.pop_back(); // removes element from the end
    
    display(vec1);    
    
    vector<int> :: iterator iter = vec1.begin(); // we use this iterator as a pointer to point to the first element of the vector vec1
    vec1.insert(iter, 566); //inserts 566 at the first index
    vec1.insert(iter+1, 500); //inserts 500 next to 566
    
    vec1.insert(iter, 5 , 400); // it inserts 400, 5 times starting from "iter" index. The rest of the elements remain as it is only their index is changed
// vec1.at(i) = vec1[i]
    
    display(vec1);    
    
    display(vec1);    
    
    return 0;
  }
  