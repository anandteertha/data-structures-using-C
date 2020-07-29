/*this program shows that the identifer of array's or the array name
contains the pointer to the first byte of the address of the array*/
#include <stdio.h>
void main()
{
  int arr[] = {1,2,3,4,5,6};
  printf("\n Address of the array = %p %p %p",arr,&arr[0],&arr);
}
