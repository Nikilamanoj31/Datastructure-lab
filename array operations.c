# include<stdio.h>
# define N 5
int a[N];
void largest();
void smallest();
void reverse();
void sum();
void mean();
void main()
{
    int c=1;
    int i,option;
    printf("enter the elements of the array :");
    for(i=0;i<=N-1;i++)
    {
        scanf("%d",&a[i]);
    }
    while(c==1)
    {
    printf("1.Largest element of the array\n");
    printf("2.Smallest element of the array\n");
    printf("3.reverse of the elements in the array\n");
    printf("4.sum of the elements in the array\n");
    printf("5.mean of the elements in the array\n");
    printf("Enter your option:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:largest();
        break;
        case 2:smallest();
        break;
        case 3:reverse();
        break;
        case 4:sum();
        break;
        case 5:mean();
        break;
        default:printf("Invalid option");
    }
    printf("Do you want to continue(0/1):");
    scanf("%d",&c);
    }
}
void largest()
{
    int i;
    int big=0;
    for(i=0;i<=N-1;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
        printf("The largest element is:%d",big);
}
void smallest()
{
    int i;
    int small=a[0];
    for(i=0;i<=N-1;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
        printf("The smallest element is:%d",small);
    
}
void reverse()
{
    int i=0;
    for(i=N-1;i>=0;i--)
    {
        printf("Elements in the reverse order:%d\t",a[i]);
    }
}
void sum()
{
    int i;
  int s=0;
  for(i=0;i<=N-1;i++)
  {
      s=s+a[i];
  }
  printf("Sum of elements are:%d",s);
}
void mean()
{
    int i,mean;
    int s=0;
    for(i=0;i<=N-1;i++)
    {
      s=s+a[i];  
    }
    mean=s/N;
    printf("The mean of the elements are:%d",mean);
}