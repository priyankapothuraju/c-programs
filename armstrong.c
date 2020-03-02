//wap to check given number is armstrong number r not.
#include<stdio.h>
void main()
{
	int num=0,digits=0,sum=0,rem=0,temp=0;
	printf("enter the number to find the number is armstrong");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digits++;
		num=num/10;
	}
	printf("number of digits:%d\n",digits);
	num=temp;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,digits);
		num=num/10;
	}
	if(sum==temp)
	{
		printf("%d is armstrong",temp);
	}
	else{
		printf("%d is not armstrong",temp);
	}
	
}
