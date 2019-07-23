 
     /**  Program to find area and circumference of circle **/
     
         #include<stdio.h>
         #include<conio.h>
            void p4()
          {
            int r;
            float pi=3.14,area,ci;
            printf("\n\t\t(Program to find area and circumference of circle)\n");
            printf("\n\t\tenter radius of circle: ");
            scanf("%d",&r);
            area=pi*r*r;
            printf("\n\t\tArea of circle = %f ",area);
            ci=2*pi*r;
            printf("\n\t\tCircumference =%f \n\n",ci);
            printf("\n\t\t***Press Enter for Next Program***\n");
			getch();
		  }
