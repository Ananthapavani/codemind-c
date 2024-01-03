#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c ",64+k);
        }
        k--;
        printf("
");
    }
}