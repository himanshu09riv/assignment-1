#include <iostream>

using namespace std;

int main()
{int phy,maths,chem,hindi,english;
float percent,sum;

    cout<<"enter marks of five sunbject";
    cin>>phy>>maths>>chem>>hindi>>english;
    sum=phy+hindi+english+maths+chem;
    percent=sum/5;
    
    if(percent>90)
     cout<<"printA";
 else if(90>percent>80)
     cout<<"print B";
 else if(80>percent>60)
      cout<<"print C";
 else if(percent<60)
       cout<<"print D";
 else 
      cout<<"percentage"<<percent;

    return 0;
}
