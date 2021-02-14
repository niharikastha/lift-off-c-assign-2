#include<stdio.h>
void main()
{
   int i, s=0, n,a[10];
   for ( i =0; i<=9 ; i++)
    {
     printf (" eter a no . ");
     scanf("%d",&a[i] );
     printf("\n");
    }
    for ( i =0 ; i <=9; i++)
    {
     if ((a[i]%2== 0)||(i%2 ==0))
      {
       s = s + a[i] ;
      }
    }
    printf(" sum = %d", s);

}
