#include<stdio.h>
#define n 10
int binarysearch(int a[],int l,int h,int x)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(a[mid] == x)
        {
            return mid + 1;
        }
        else if(a[mid]<x)
        {
             l = mid + l ; 
        }
        else{
            h = mid - l;
        }
    
    }
    return -1;
}
int main()
{
    int a[n]  = {1,5,10,15,19,26,37,41,49},x;
    printf("Enter searching element :");
    scanf("%d",&x);
    int m = binarysearch( a,0,n-1,x);
    if(m==-1)
    {
        printf("element is not found....");
    }
    else
    {
        printf("element is found at %d position",m);
    }

}