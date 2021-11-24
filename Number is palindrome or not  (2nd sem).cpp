#include<stdio.h>
main()
{
int n,p,rem,rev=0;
printf("\n\t\t---***PALINDROME NUMBER***---\n");
printf("\nEnter the value of n is");
scanf("%d",&n);
p=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
if(rev==p)
{
printf("\nThis is a Palindrome");
}
else
{
printf("\nThis is not a Palindrome");
}
return(0);
}
