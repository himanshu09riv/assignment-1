#include <iostream>
#include <cmath>
using namespace std;

int main()
{float r, A ,C,pie=3.14;

/*
 area of circle, circumference of circle
*/
cout<<"enter the radius of circle";
cin>>r;
A=r*pow((pie),2);
C=2*pie*r;
cout<<"area of circle"<<A<<endl<<"circumference of circle"<<C;

    return 0;
}
