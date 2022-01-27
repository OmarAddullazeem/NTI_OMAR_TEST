#include<stdio.h>
void main()
{
  int rows;
  int no=1 ; // initial start for the pyramid....
  printf("Enter the number of rows of the triangle:");
  scanf("%d",&rows);
  for(int i=1; i<=rows ;i++)
  {
    for(int j=1; j<=i ;j++)
    {
      if(j<=i)
      printf("%d  ",no++); // also double spaces between each number, and we cant use \n or each line will have his own line.."signature Omar.A"

    }
    printf("\n");
  }
printf("hellowprld");

}
