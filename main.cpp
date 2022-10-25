#include <iostream>
#include<cmath>

using namespace std;


int main()
{
     float temp,pre,den,alt,g=9.80665,R=287.00;

cout<<"Enter The Altitude[In Meters]: " <<endl;
cin>>alt;


if(alt== 47000 or alt>32000 and alt< 47000){
    temp=228.65+0.0028*(alt-32000);
    pre=867.2549941*pow((temp/228.65),(-1*g/(R*0.0028)));
    den=pre/(R*temp);
    }
else if(alt== 32000 or alt>20000 and alt<32000 ){
    temp=216.65+0.001*(alt-20000);
    pre=5471.935072*pow((temp/216.65),(-1*g/(R*0.001)));
    den=pre/(R*temp);
    }
else if(alt==20000 or alt>11000 and alt <20000){
    temp=216.65;
    pre=22625.79149*pow(2.7182818281828,(-1*g*(alt-11000)/(R*temp)));
    den=pre/(R*temp);
    }
else if(alt== 11000 or alt>0 and alt<11000){
    temp=288.15-0.0065*(alt);
    pre=101325*pow((temp/288.15),(g/(R*0.0065)));
    den=pre/(R*temp);
    }
else if(alt==0){
    temp=288.15;
    pre=101325;
    den=1.225225683;
    }

cout<<"The Temperature is "<<temp<<"K.\n";
cout<<"The Density is "<<den<<"kg/m^3.\n";
cout<<"The Pressure is "<<pre<<"Pa.\n";


    return 0;
}
