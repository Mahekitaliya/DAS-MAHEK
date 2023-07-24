#include<stdio.h>
int main()
{
    int n,m,k;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter m :");
    scanf("%d",&n);
    int a[n],b[n],c[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter element 1 array :");
        scanf("%d",&a[i]);
        c[i] = a[i];

    }
    k = i;
    for(i=0;i<m;i++)
    {
        printf("Enter ellement 2array :");
        scanf("%d",&b[i]);
        c[k++] = b[i];
        
    }
    printf("marge array : \n");
    for(i= 0;i<k;i++)
    {
        printf("%d\t",c[i]);

    }
}
