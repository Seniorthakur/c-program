

      /** Program to convert temperature from degree centigrade to Fahrenheit **/ 
          
        #include<stdio.h>
        #include<conio.h>
         void p6()
        {
          printf("\n\t\t(Program to convert temperature from degree centigrade to Fahrenheit)\n");	
          float c,f;
          printf("\n\t\tEnter temp in centigrade: ");
          scanf("%f",&c);
          f=(1.8*c)+32;
          printf("\n\t\tTemp in Fahrenheit = %f \n\n",f);
          printf("\n\t\t***Press Enter for Next Program***\n");
		  getch();
		} 
