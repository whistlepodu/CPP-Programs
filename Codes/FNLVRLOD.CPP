#include<iostream.h>
#include<conio.h>
#include<math.h>
void power(int,int);
void power(double,int);
void main()
{
  int m,n;
  double p;
  clrscr();
  cout<<"Integer + Integer Calculation";
  power(m,n);
  cout<<"\n\nDouble + Integer Calculation";
  power(p,n);
  getch();
}
void power(int x, int y)
{
  int r1;
  cout<<"\n\nEnter Number: ";
  cin>>x;
  cout<<"Enter Power: ";
  cin>>y;
  r1=pow(x,y);
  cout<<"\n\nResult: "<<r1;
}
void power(double x, int y)
{
  double r1;
  cout<<"\n\nEnter Number: ";
  cin>>x;
  cout<<"Enter Power: ";
  cin>>y;
  r1=(double)pow(x,y);
  cout<<"\n\nResult: "<<r1;
}
