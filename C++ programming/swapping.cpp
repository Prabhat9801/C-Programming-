#include<iostream>
using namespace std;
int main(){
int a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    int c=a+b;
    a=c-a;
    b=c-b;
    cout<<"The a = "<<a;
    cout<<"\nThe b = "<<b;
    return 0;


}
