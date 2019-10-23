#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i=0,t,s=0,x,n;
cout <<"enter the last term" ;
cin >> n;

for(x=1; x<=n; x=x+1)
{
   i=2+i;
   t=pow(i, 2);
   s=s+t;

 cout<<t<<"+";
}
cout <<"=" << s;

getch();

}