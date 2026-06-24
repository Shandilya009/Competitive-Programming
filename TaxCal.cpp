#include<iostream>
using namespace std;

int main(){
    float sal,tax=0;
    cin>>sal;
    if(sal<3)
        tax=0;
    else if(sal<6)
        tax=(sal-3)*0.05;
    else if(sal<9)
        tax=3*0.05+(sal-6)*0.075;
    else if(sal<12)
        tax=3*0.05+3*0.075+(sal-9)*0.10;
    else if(sal<15)
        tax=3*0.05+3*0.075+3*0.10+(sal-12)*0.125;
    else if(sal<18)
        tax=3*0.05+3*0.075+3*0.10+3*0.125+(sal-15)*0.15;
    else if(sal<20)
        tax=3*0.05+3*0.075+3*0.10+3*0.125+3*0.15+(sal-18)*0.175;
    else
        tax=3*0.05+3*0.075+3*0.10+3*0.125+3*0.15+2*0.175+(sal-20)*0.30;

    cout<<tax;
    return 0;
}