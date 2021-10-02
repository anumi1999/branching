//find sum of lower triangle in a matrix
#include<iostream.h>
#include<conio.h>
void main()
  {
    clrscr();
    int a[100][100], j,i,s=0,n,m;
    cout<<" enter rows :";
    cin>>n;
    cout<<" enter the elements in array  :";
    for(i=0; i<n;i++)
      {
	for(j=0; j<n; j++)
	  {
	    cin>>a[j][i];
	  }
      }
    m=n;
    for (i=n-1;i>=0;i--)      //summing up
      {
	for(j=0 ; j<m;j++)
	 {
	   s=s+a[j][i];
	 }
	m--;
      }
    for(i=0; i<n;i++)            //output in matrix form
      {
	for(j=0;j<n;j++)
	 {
	   cout<<a[j][i]<<" ";
	 }
	cout<<"\n";
      }
    cout<<" the sum is "<<s;
    getch();
  }
/*  output
 enter rows :3
 enter the elements in array  :1 4 5 6 7 3 9 22 45                              
1 4 5                                                                           
6 7 3                                                                           
9 22 45                                                                         
 the sum is 90
*/








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



