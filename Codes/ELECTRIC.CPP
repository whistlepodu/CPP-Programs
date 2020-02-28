#include<iostream.h>
#include<conio.h>
void main()
{
  int units;
  float amt;
  char name[20];
  clrscr();
  cout<<"Enter Consumer`s Name: ";
  cin>>name;
  cout<<"Enter Number of Units Consumed: ";
  cin>>units;
  if(units<=100)
    {
      amt=(float)units*3;
    }
  else if(units>100 && units<=300)
    {
      amt=(float)(100+((units-100)*5));
    }
  else
    {
      amt=(float)(1300+((units-300)*7));
    }
  if(amt<100)
    {
      amt=100;
    }
  if(amt>500)
    {
      amt=(float)amt+(0.15*amt);
    }
  cout<<"\n\n";
  cout<<"\nName of Consumer: "<<name;
  cout<<"\nUnits Consumed: "<<units;
  cout<<"\nElectricity Bill: Rs. "<<amt;
  getch();
}