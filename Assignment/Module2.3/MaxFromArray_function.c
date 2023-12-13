//max form given array using function

#include<stdio.h>

int findMaxElem(int arr1[])
{
    int i=1,max;
    max=arr1[0];
    while(i < 5)
	{
      if(max<arr1[i])
           max=arr1[i];
      i++;
    }
    return max;
}

int main()
{
    int arr1[5],max,i;
   
       printf(" Input elements in the array :\n");
       for(i=0;i<5;i++)
        {
	      printf(" element:");
	      scanf("%d",&arr1[i]);
	    }
    max=findMaxElem(arr1);

    printf(" The largest element in the array is : %d\n\n",max);
    return 0;
}

