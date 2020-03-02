#include<stdio.h>
void main()
{
	int basicsalary=0;
	float grosssalary=0,hra=0,da=0;
printf("enter basic salary");
scanf("%d",&basicsalary);
if(basicsalary<=10000)
{
	hra=basicsalary/100*20;
	da=basicsalary/100*80;
}
else if(basicsalary<=20000)
{
	hra=(basicsalary/100*25);
	da=(basicsalary/100*90);
}
else if(basicsalary>=20000)
{
	hra=(basicsalary/100*30);
	da=(basicsalary/100*95);
	}
	grosssalary=basicsalary+hra+da;
		printf("basicsalary is:%d\n",basicsalary);
	printf("grosssalary is:%f\n",grosssalary);

}
