


    /** Program to display arithmetic operator using switch case. **/ 
    
	#include<stdio.h>
	#include<conio.h>
	void p16()
	{
		printf("\n\t\t(Program to display arithmetic _operator using switch case.)\n");
	    int a,b,n,s,m,su;
		float d;
	    printf("\n\t\tEnter 1st no. : ");
	    scanf("%d",&a);
	    printf("\n\t\tEnter 2st no. : ");
	    scanf("%d",&b);
	    printf("\n\t\tOptions");
    	printf("\n\t\t\t1 for Sum\n\t\t\t2 for Multiply\n\t\t\t3 for Subtraction\n\t\t\t4 for division: ");
    	printf("\n\n\t\tEnter Options No.: ");
    	scanf("%d",&n);
    	switch(n)
        	{
	            case 1:
				    s=a+b;
				    printf("\n\t\t\tSum=%d",s);
				    break;
				case 2:
				    m=a*b;
					printf("\n\t\t\tMultiply=%d",m);
					break;
				case 3:
				    su=a-b;
					printf("n\t\t\tSubtraction=%d",su);
					break;
				case 4:
				    d= (a/b);
					printf("\n\t\t\tDivission=%f",d);
					break;
				default:
					printf("\n\t\tWrong Input - Retry");
					break;
			}
		 printf("\n\n\n\t\t***Press Enter for Next Program***\n");
		getch();
	} 
	
