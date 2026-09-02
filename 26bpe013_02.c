#include <stdio.h>
int main()
{
int n,q,r;
printf("enter a value");
scanf("%d",&n);
q=n/7;
r=n-q*7;
if (r==0)
printf("%d id divisible by 7.\n",n);
else
printf("%d is not divisible by 7.\n",n);
return 0;
}
