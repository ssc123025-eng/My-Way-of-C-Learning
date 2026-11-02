#include<stdio.h>
int main()
{
    int n=0;
    int x;
    int flag;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        flag=1;
        for(int j=2;j<x;j++)
        {
            if(x%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
