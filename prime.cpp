#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int c,i,j,n,m,q,k,a,l,s=0;
cin>>n;
cin>>m;
for(i=n;i<=m;i++)
{    j=i;
     c=0;
     l=j;
  while(l>0)
  {
   i=0;
   a=a/10;
   c++;
   }
  while(j>0)
  {
    a=j%10;
    j=j/10;
    s=s+pow(a,c);
    }
    	if(s==i)
    cout<<i<<" ";
    }

    getch();
    }
