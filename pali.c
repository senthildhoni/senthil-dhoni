#include <stdio.h>
 
   void main()
    {
      int n;
      int a=0; 
      int c;
 
      printf("Enter a number \t");
      scanf("%d",&n);
 
      c=n;
 
      while(c!=0)
   {
      a=a*10;
      a=a+c%10;
      c=c/10;
      
   }
 
      if (n==a)
      printf("%d is a palindrome\n",n);
      else
      printf("%d is not a palindrome\n",n);

   
   }
