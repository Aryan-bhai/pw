#include<iostream>
using namespace std;
int main()
{
int total,boys,girls;
total = (45*80)/100;
boys = 17;
girls= total-boys;
cout<<girls<<endl;

int n,first,second,third,forth,fifth,sum;
n=12345;
first= n/10000;//jab n , 10000 se divide hoga tab 1.2345 de ga jo interger nahi hai but computer usko  1 as interger value lega.
n= n%10000;
second=n%1000;
n= n%1000;
third=n/100;
n= n%100;
forth=n/10;
n = n%10;
fifth=n;
sum=first+forth;
cout<<sum<<endl;
//Write a program to calculate the sum of digits of a 3 digit number. 
n=123;
first=n/100;
n=n%100;
second=n/10;
n=n%10;
third=n;
cout<<(first+second+third)<<endl;
//- Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
float x,y;
cout<<"enter one number: ";
cin>>x;
cout<<"enter another number:";
cin>>y;
cout<<"sum="<<x+y<<endl;
cout<<"Difference="<<x-y<<endl;
cout<<"Product="<<x*y<<endl;
cout<<"Quotient="<<x/y<<endl;
cout<<"modules="<<int(x)%int(y)<<endl;







return 0;
}