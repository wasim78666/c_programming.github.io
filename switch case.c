//wap to read one no. and on the two operation so program will display the result after the corresponding operation.
//switch cond.
 
 /*#include<stdio.h>
 void main()
 {
     int a, b, result;
     char ch;
     printf("enter your operator +,*,-,/\n");
     scanf("%ch",&ch);
     printf("enter the value of a and b\n");
     scanf("%d%d",&a,&b);
     switch(ch)
     {
         case'+': result = a+b;
         printf("addition of two number is %d\n",result);    
         break;
         
         case'*': result = a*b;
         printf("multiplication of two number is%d\n",result);
         break;
         
         case'-': result =a-b;
         printf("subtraction of two number is %d\n",result);
         break;
         
         case'/': result =a/b;
         printf("divison of two number is %d\n",result);
         break;
         
         default:
         printf("invalid operator");
         break;
         
         
     }
    
 }*/

 // wap user will enter a value from 1 to 7 program will display the day of the week.
 
 
#include<stdio.h>
void main()
{
 int week;
 char ch;
 printf("enter the weeks of days(1-7)");
 scanf("%d",&week);
 switch(week)
 {
     case 1: 
     printf("Monday");
     break;
     
     case 2:
     printf("Tuesday");
     break;
     
     case 3:
     printf("Wednesday");
     break;
     
     case 4:
     printf("Thursday");
     break;
     
     case 5:
     printf("friday");
     break;
     
     case 6:
     printf("saturday");
     break;
     
     case 7:
     printf("sunday");
     break;
      default:
      printf(" invalid number");
      break;
 }
}