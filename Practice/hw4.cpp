// Take Real Number input and chek if it is an integer or not.
#include <iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a number to check it is int or not: ";
    cin>>x;
    int y = int(x);
    if(x==y) cout<<"Integer.";
    else cout<<"Not int.";

}