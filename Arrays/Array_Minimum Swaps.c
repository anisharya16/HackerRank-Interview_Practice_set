#include <stdio.h>
int main()
{
    int n,i,j,temp_index,count=0,temp_val;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            temp_index=i+1;
            temp_val=a[i];
            for(j=i+1;j<n;j++)
            {
                if(temp_index==a[j])
                {
                    a[temp_index-1]=a[j];
                    a[j]=temp_val;
                    count++;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}