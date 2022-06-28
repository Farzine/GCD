#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
   char s[1001] ;
   gets(s);
   int len=strlen(s);
   char a[500];
   for( i=1,j=0;i<len-1;i=i+3,j++)
   {
       a[j]=s[i];
   }

   for(int j=0;j<strlen(a);j++)
   {
       for(int i=0;i<strlen(a)-1;i++)
       {
           if(a[i]>a[i+1]){
            char temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
           }
       }
   }
   int count=0;
   for(i=0;i<strlen(a);i++)
   {
       if(a[i]!=a[i+1])
        count++;
   }
    printf("%d",count);


    return 0;
}
