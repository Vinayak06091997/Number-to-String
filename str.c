#include<string.h>
#include <stdio.h>

int main()
{
   char st[][10]={"one","two","three","four","five","six","seven","eight","nine"};
   char t[][10]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
   char tr[][10]={"houndred","thousand"};
   int n=10,a[10],i=0,k,b[10],j=0,v,r;
   while(n!=0)
   {
       a[i]=n%10;
       n=n/10;
       i++;
   }
   k=i;
   v=i;
   for(i=k-1;i>=0;i--)
   {
       b[j++]=a[i];
      
   }
   k=0;
   if(v==1)
   {
        r=b[k++];
        printf("%s ",st[r-1]);
   }
   if(v==2)
   {
        r=b[k++];
        printf("%s ",t[r-1]);
        r=b[k];
        printf("%s ",st[r-1]);
   }
   if(v==3)
   {
         r=b[k++];
        printf("%s ",st[r-1]);
        printf("%s ",tr[0]);
        r=b[k++];
        printf("%s ",t[r-1]);
        r=b[k];
        printf("%s ",st[r-1]);
   }
  if(v==4)
   {
        r=b[k++];
        printf("%s ",st[r-1]);
        printf("%s ",tr[1]);
         r=b[k++];
        printf("%s ",st[r-1]);
        printf("%s ",tr[0]);
        r=b[k++];
        printf("%s ",t[r-1]);
        r=b[k];
        printf("%s ",st[r-1]);
   }
   if(v==5)
   {
        r=b[k++];
        printf("%s ",t[r-1]);
         r=b[k++];
         printf("%s ",st[r-1]);
        printf("%s ",tr[1]);
         r=b[k++];
        printf("%s ",st[r-1]);
        printf("%s ",tr[0]);
        r=b[k++];
        printf("%s ",t[r-1]);
        r=b[k];
        printf("%s ",st[r-1]);
   }
}
