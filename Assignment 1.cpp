#include<iostream>
using namespace std;
int main()
{
//Q1
cout<<"Solutio of-{Q1 - Take 2 integer values in two variables x and y and print their product.}"<<endl;
int x,y;
cout<<"enter a integer: ";
cin>>x;
cout<<"enter another integer:";
cin>>y;
int product = x*y;
cout<<"required product:"<<product<<endl;
//Q2
cout<<"Solution of-{Q2 - Print the ASCII value of character 'U'.}"<<endl;
cout<<"The ASCII value of character 'U is "<<(int)'U'<<endl;
//Q3
cout<<"Solution of-{Q3-Write a C++ program to take length and breadth of a rectangle and print its area.}"<<endl;
int length,breadth;
cout<<"length of rectangle :";
cin>>length;
cout<<"Breadth of rectangle :";
cin>>breadth;
cout<<"Hence, the required area is "<< length*breadth<<endl;
//Q4
cout<<"Solution of-{Q4-- Write a C++ program to calculate the cube of a number.}"<<endl;
 int a;
cout<<"enter a number: ";
cin>>a;
cout<<"Hence,cube of "<< a<<":"<<(a*a*a)<<endl;
//Q5
cout<<"Solution of-{Q5 - Write a C++ program to find size of basic data types.}"<<endl;
cout<<"Size of diffrent data types"<<endl;
cout<<"size of integer:"<<sizeof(int)<<"bytes"<<endl;
cout<<"size of character:"<<sizeof(char)<<"bytes"<<endl;
cout<<"size of float:"<<sizeof(float)<<"bytes"<<endl;
cout<<"size of doulble :"<<sizeof(double)<<"bytes"<<endl;
cout<<"soze of bool:"<<sizeof(bool)<<"bytes"<<endl;
//Q6
cout<<"Slution of-{Q6-Write a C++ program to swap two numbers with the help of a third variable.}"<<endl;
int d,f;
cout<<"Enter a first number:";
cin>>d;
cout<<"Enter a second number:";
cin>>f;
int e;
e=f;
f=d;
d=e;
cout<<"After swap:"<<endl<<d<<endl<<f<<endl;




    return 0;
}
















