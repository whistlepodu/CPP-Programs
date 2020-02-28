#include<iostream.h>
#include<conio.h>
void main()
{
  unsigned int f=1;
  long int a;
  clrscr();
  cout<<"Enter the Number: ";
  cin>>a;
  int t=a;
  while(a>=1)
    {
      f=f*a;
      a--;
    }
  cout<<"Factorial of " <<t<< ": "<< f;
  getch();
}