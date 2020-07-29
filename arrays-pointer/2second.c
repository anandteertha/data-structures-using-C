/* arr[i] , i[arr] , *(i+arr) , *(arr+i) gives the same value */

//this code modifies the contents of the array using a pointer to an array.
#include<stdio.h>
void main()
{
  int arr[] = {1,2,3,4,5,6};
  int *ptr ,i;
  ptr = arr;
  printf("\nThe array is:\n");
  for(i=0;i<6;i++)
  {
    printf("%d\t",*(arr+i));
  }
  *ptr -= 1;
  *(ptr++) = 1;
  *(ptr++) = 0;
  printf("\nThe array becomes:\n");
  for(i=0;i<6;i++)
  {
    printf("%d\t",*(arr+i));
  }
}
