#include <stdio.h>
int main()
{
    int i,z,n,d,temp;
    scanf("%d %d",&n,&d);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        z=(i+d)%n;
        b[i]=a[z];
        printf("%d\t",b[i]);
    } 
}