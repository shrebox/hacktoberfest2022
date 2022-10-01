#include<iostream>
using namespace std;
class coord
{
int x,y;
public:
coord(){x=0;y=0;}
coord(int i,int j)
{
x=i;
y=j;
}
void get_xy(int &i,int &j)
{
i=x;
j=y;
}
int operator==(coord ob2)
{
return (x==ob2.x)&&(y==ob2.y);
}
int operator&&(coord ob2)
{
return (x&&ob2.x)&&(y&&ob2.y);
}
};
int main()
{
coord ob1(10,10),ob2(20,0),ob3(10,10);
int x1,y1;
if(ob3==ob1)
{
cout<<"hurray";

}
if(ob2&&ob1)
{
cout<<"hurray!";

}
return 0;
}
