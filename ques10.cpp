#include <iostream>
#include <cmath>
using namespace std;

int main()
/*
P=PRINCIPAL,T=time ,R=Rate;
*/
{float P,R,T,SI,CI;
cout<<"enter principal,rate,time";
cin>>P>>R>>T;
SI=P*R*T/100;
CI=P* pow((1-R/100),T)-P;
cout<<"simple interest"<<SI<<endl<<"compound interest"<<CI;
    return 0;
}
