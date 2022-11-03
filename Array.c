#include <stdio.h>

int main()
{
   int a[200],i,n,c,r;
   scanf("%d",&c);
   for(int k=0;k<c;k++)
   {
       scanf("%d %d",&n,&r);
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       i=r;
       for(int j=0;j<n;j++)
       {
           if(i>=n)
           {
               i=i-n;
           }
           printf("%d ",a[i]);
           i++;

       }
       printf("\n");
   }
   return 0;
}
