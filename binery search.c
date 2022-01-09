#include<stdio.h>
# define N 8
int main()
{
    int f=0, l= N-1, mid , a[N] , search;
    mid=(f+l)/2;
    printf("enter element of array")
    printf("enter search element\n");
    scanf("%d" , &search);
    while(f<=l)
    {
    if(a[mid]==search)
    {
        printf("%d element found at %d location\n" , search , mid+1);
        break;
    }
    else if (a[mid]>search)
    {
        l=mid-1;
    }
    else
    {
        f=mid+1;
        mid=(f+l)/2;
    }
    }
    if(f>l)
    {
        printf("not found");

    }
    return 0;
}