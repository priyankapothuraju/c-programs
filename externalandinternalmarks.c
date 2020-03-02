//WAP to accept project marks,internal,external marks from student and 
//genereate certificate with grade.

//70% project
//20% external
//10% internal

//85%   outstanding
//75--85  excellent
//70--75   Good
//60-70   average 
//50-60  poor 

void main()
{
   int project=0,external=0,internal=0;
   float total=0;
   printf("Enter project, external and internal marks");
   scanf("%d%d%d",&project,&external,&internal);
   if(project>=50 && external>=50 && internal>=50)
   {
   	total=(project*70)/100+(external*20)/100+(internal*10)/100;
   	printf("Total marks: %f \n",total);
   	if(total>=85)
   	{
   		printf("Outstanding");
	   }
	   else if(total>=75)
	   {
	   	printf("Excellent");
	   }
	   else if(total>=70)
	   {
	   	printf("Good");
	   }
	   else if(total>=60)
	   {
	   	printf("Average");
	   }
	   else 
	   {
	   	printf("Poor");
	   }
   	  
   }
   else 
   {
   	  if(project<50)
   	  {
   	  	printf("student got fail in project and score is : %d\n ",project);		 
	  }
   	}
   	 	 if(internal<50)
   	  {
   	  	printf("student got fail in internal and score is : %d \n",internal);		
	   }
   	  	 
	if(external<50)
   	  {
   	  	printf("student got fail in external and score is : %d \n",external);
	   }
}
