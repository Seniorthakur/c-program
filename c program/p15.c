


    
    /** Program to use switch statement. Display Monday to Sunday.**/ 
    
	#include<stdio.h>
	#include<conio.h>
	void p15()
	{
		 printf("\n\t\t(Program to use switch statement. Display Monday to Sunday.)\n");
	char ch;
	printf("\n\t\tOpition:-\n\t\t\t1 for Monday\n\t\t\t2 for Tuesday\n\t\t\t3 for Wednesday\n\t\t\t4 for Thursday\n\t\t\t5 for Friday\n\t\t\t6 for Saturday\n\t\t\t7 for Sunday");
	printf("\n\n\t\tEnter The Number :- ");
	scanf("%d",&ch);
	switch(ch)
	  {
    	case 1:
	        printf("\n\t\tMonday");
	        break;
	    case 2:
	        printf("\n\t\tTuesday");
         	break;
	    case 3:
	        printf("\n\t\tWednesday");
	        break;
     	case 4:
        	printf("\n\t\tThursday");
        	break;
    	case 5:
        	printf("\n\t\tFriday");
        	break;
   	    case 6:
        	printf("\n\t\tSaturday");
        	break;
     	case 7:
    	printf("\n\t\tSunday");
    	break;
   	default :
    	printf("\n\t\tWrong input - Retry");
    	break;
    	}
    	 printf("\n\n\n\t\t***Press Enter for Next Program***\n");
	getch();
	} 
