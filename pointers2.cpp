#include<iostream>
using namespace std;


int main()
{float var=10;
float *ptr=&var;
cout<<"prints value of variable:"<<var<<endl;
cout<<"prints value present at address given by pointer:"<<*ptr<<endl;
cout<<"prints address of var:"<<&var<<endl;
cout<<"prints value of ptr:"<<ptr<<endl;
cout<<"prints address of ptr:"<<&ptr;


}
