#include<stdio.h>
int main ()
 {
     int a[100],i,l=0,n;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
     if(a[i]%2!=0)
     {
         l++;
     }
     }
     if(l<=2)
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }
     return 0;
 }