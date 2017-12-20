#include<stdio.h>

int main(void)
{
   int m, n, c, d, matrix[10][10], max;
 
   printf("Кількість стовпців і колонок\n");
   scanf("%d%d",&m,&n);
   printf("Елементи матриці\n");
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         scanf("%d",&matrix[c][d]);
      }
   }
 
 max = matrix[0][0];
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         if ( matrix[c][d] %2 == 1 )
            max = matrix[c][d];
      }
   }
 
   printf("Максимальний непарний елемент =  %d\n", max);
 
    getchar();
   return 0;
}
