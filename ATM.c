#include<stdio.h>
double balance=20000;
void withdraw()
{
	int amount=0;
	 int withdrawcount=0;
	printf("enter the withdraw amount");
	scanf("%d",&amount);
	if(amount%100==0)
	{
		if(amount<=balance-1000)
		{
			if(amount<=20000)
			{
			balance=balance-amount;
			printf("%lf" ,balance);	
			}
			else
			{    
				printf("limit is upto 20000");
				
				
			}}
			else
			{  
			     
				printf("maintain minimum balance");
			}
		}
			else
			{
			printf("Invalid amount");
			int a1mount;
			a1mount=(amount%100);
			  if(a1mount>=50)
			  {
			 amount=amount-a1mount;
			 amount=amount+100;
			 printf("u will take amount %d",amount);
			 }
			 else if(amount<50)
			 {
			 amount=amount-a1mount;
			 printf("u will take amount %d",amount);	 
		}
}

		
	}

void repeate()
{
	int opt=0;
	printf("enter 1 for continue 0 for exit");
	scanf("%d",&opt);
	if (opt==1)
	{
	deposite();
	}
	else 
	{
		printf("thank you");
	}
}
void deposite()
{
	int amount=0;
	printf("enter the amount");
	scanf("%d",&amount);
	if(amount%100==0)
	{
	balance=balance+amount;
	printf("available balance is:%lf",balance);
	}
	else
	{	
		printf("INVALID AMOUNT");
	}
}
void viewoptions()
{
	int option=0;
	printf("1.deposite\n 2.withdraw\n 3.balance\n 4.exit\n");
	scanf("%d",&option);
	if (option==1)
	{
		deposite();
		repeate();
	}
	else if (option==2)
	{
		withdraw();
		repeate();
	}
	else if (option==3)
	{
		printf("%d",balance);
	}
	else if (option!=0)
	{
		printf( "INVALID OPTION\n");
	}
	else 
	{
		printf("THANK YOU/n");
	}
}
void validate()
{
	int pin=0;
	static int pincount=0;
	printf("enter the pin number");
	scanf("%d",&pin);
	if (pin==1234)
	{
	viewoptions();
	}
	 else
	{
	pincount++;
    printf("invalid pin number try again \n");  
	if(pincount<3)
	validate();
	else
    printf("BLOCKED");
	}}
void main()
{
	validate();
}
