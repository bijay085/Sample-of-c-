// rev || sum || average

#include<stdio.h>
#include<math.h>

int main ()
{
int n, temp, rev=0, rem;
float av, sum=0;

printf("Enter the 4 digit num:");
scanf("%d", &n);

while(n!=0){
rem = n%10;
rev = rev*10 + rem;
sum = sum + rem;
av = sum/4 ;
n = n/10;
}

	printf("the reverse = %d", rev);
	printf("\n The sum = %f", sum);
	printf("\n The average = %f", av);
	


return 0;
}



