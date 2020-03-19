//To check the maximum and the minimum limit of the fundamental data types
#include<iostream>
#include<climits>     //defines only the size of integral data types both fundamental and derived.
using namespace std;
int main()
{
    cout<<"The max range of int is : "<<INT_MAX;
    cout<<"\nThe min range of int is : "<<INT_MIN;
   /* cout<<"\nThe max range of doble is : "<<DOUBLE_MAX;
    cout<<"\nThe min range of double is : "<<DOUBLE_MIN;*/   //since double is not an itegral data type
    return 0;                                                //hence it will show an error while executing  
}                                                            //the above lines
