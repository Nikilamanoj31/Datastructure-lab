#include<stdio.h>
int main()
{
	int i,j,m,n,k;
	int arr1[10],arr2[10],res[10];
	printf("Enter size of first array : ");
	scanf("%d",&m);
	printf("Enter the size of second array : ");
	scanf("%d",&n);
	printf("Enter a sorted array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter a sorted array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("First array  : ");
	for(i=0;i<m;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	printf("Second array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr2[i]);
	}
	i=0;
	j=0;
	k=0;
	printf("\n");
	while((i<m)&&(j<n))
	{
		if(arr1[i]<arr2[j])
		{
			res[k]=arr1[i];
			i++;k++;
		}
		else
		{
			res[k]=arr2[j];
			j++;k++;
		}
	}
	while(i<m)
	{
		res[k]=arr1[i++];
	}
	while(j<n)
	{
		res[k]=arr2[j++];
	}
	printf("Merged array : ");
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",res[i]);
	}
return 0;
}
