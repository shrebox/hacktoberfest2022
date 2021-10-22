#include <iostream>
using namespace std;

int main(){

    int array[10];
    cout<<array<<endl;
    cout<<&array<<endl;

    array[0]=5;
    array[1]=10;

    cout<<*array<<endl;
    cout<<*(array+1)<<endl;

    int *ptr=&array[0];

    cout<<ptr<<endl;
    cout<<array<<endl;

    cout<<&ptr<<endl;
    cout<<&array<<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(array)<<endl;
   
