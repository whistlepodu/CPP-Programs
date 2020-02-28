#include<iostream.h>
#include<conio.h>
#include<math.h>
class power
{
  int m,n;
  double p;
  public:
  int power1(int,int);
  double power1(double,int);
};
int power::power1(int x, int y)
{
  int r1;
  r1=pow(x,y);
  return r1;
}
double power::power1(double x, int y)
{
  double r1;
  r1=(double)pow(x,y);
  return r1;
}
void main()
{
  int m,n;
  double p,r1;
  power pw;
  clrscr();
  cout<<"\Integer + Integer Calculation: ";
  cout<<"\n\nEnter Integer Number: ";
  cin>>m;
  cout<<"Enter Power: ";
  cin>>n;
  r1=pw.power1(m,n);
  cout<<"\nResult: "<<r1;
  cout<<"\n\nDouble + Integer Calculation: ";
  cout<<"\n\nEnter Double Number: ";
  cin>>p;
  cout<<"Enter Power: ";
  cin>>n;
  r1=(double)pw.power1(p,n);
  cout<<"\nResult: "<<r1;
  getch();
}
