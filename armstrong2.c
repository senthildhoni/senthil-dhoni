#include<stdio.h>
int main()
{
int l,h,n,rem,armstrong;
printf("Enter two 3 digit numbers(low and high):");
scanf("%d%d",&l,&h);
for(;l<h;l++)
 {
 n=l;
 armstrong=0;
 while(n!=0)
  {
   rem=n%10;
   armstrong+=(rem*rem*rem);
   n/=10;
  }
 if(armstrong==l)
  {
  printf("%d\t",l);
  }
 }
return 0; 
}
