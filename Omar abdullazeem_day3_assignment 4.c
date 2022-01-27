#include<stdio.h>
void main()
{
  int i,j,rows;
  int no=1 ; // initial start for the pyramid....
  printf("Enter the number of rows of the triangle:");
  scanf("%d",&rows);
  for(i=1; i<=rows ;i++)
  {
    for(j=1; j<=i ;j++)
    {
      if(j<=i)
      printf("%d  ",no++); // also double spaces between each number, and we cant use \n or each line will have his own line.."signature Omar.A"

    }
    printf("\n");
  }

}
