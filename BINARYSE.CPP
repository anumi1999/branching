#include<stdio.h>
#include<conio.h>
int bs( int a[] , int n , int m)        // for bineary search 
  {
     int beg, last , mid ;
     beg =0;
     last = n-1;
     while ( beg <= last )
       {
	 mid  = (beg+last ) /2;
	 if ( m== a[mid] )
	    return mid;
	 else if ( m> a[mid] )
	   beg = mid +1;
	 else
	    last = mid -1;
       }

	 return -1;
  }
int linearse( int a[] , int n , int m )       // for linear search
  {
      int i = 0 ;
      for ( i = 0 ; i < n ; i ++ )
	{
	   if ( a[i] == m )
	      return m ;
	}
      return -1 ;
  }
void main ()
  {
     int a[50], n, m , h ;
     clrscr() ;
     printf(" enter the array size ");
     scanf("%d" , &n ) ;
     printf(" enter the array elements");
     for  ( int i =0; i < n; i++ )
       scanf("%d" , &a[i]) ;
     printf("enter the element to be searched ") ;
     scanf("%d" , &m) ;
     printf(" using bineary search: " ) ;
     h = bs (a,n,m);
     if (h== -1)
       printf( " not found" ) ;
     else
       printf(" it is on %d  position " , h+1 );
     printf(" enter the element to be found " ) ;
     scanf("%d" , &m );
     printf("Finding by linear search : " ) ;
     h  = linearse ( a,n,m);                        //  linear search function called
     h = bs (a,n,m);
     if (h== -1)
       printf( " not found" ) ;
     else
       printf(" it is on %d  position " , h+1 );
     getch();
  }
/* output
 enter the array size 5
 enter the array elements 9                                                     
10                                                                              
15                                                                              
66                                                                              
78                                                                              
enter the element to be searched 78                                             
 it is on  5 position
  enter the array size 5
 enter the array elements 9                                                     
10                                                                              
15                                                                              
66                                                                              
78                                                                              
enter the element to be searched 90                                             
 not found
 */





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

