#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=sqrt(n);
    if(m*m==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}