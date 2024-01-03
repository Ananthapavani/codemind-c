#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+k);
        }
        k=k-1;
        printf("
");
    }
}