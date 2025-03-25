#include<stdio.h>
void main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements : ");
scanf("%d",&n);
printf("\nEnter %d integers : \n", n);
for(i = 0; i < n; i++)
{
scanf("%d",&array[i]);//initialising the elements in an array

}
printf("\n Enter value to find : ");
scanf("%d", &key);//input key element to search
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high)
{
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key)
{
printf("\n\n %d found at location %d \n", key, mid+1);
break;
}
else
high = mid - 1;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
}
