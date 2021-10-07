#include <iostream>
using namespace std;
void print(int *p){
    cout<< *p <<endl;
}
void incrementPointer(int *p){
    p=p+1;
}

void increment(int *p){
    (*p)++;
}
int main(){
int i=10;
int *a = &i;
print(a);

cout<<a<<endl;
incrementPointer(a);
cout<<a<<endl;


cout<<*a<<endl;
increment(a);
cout<<*a<<endl;
}   
