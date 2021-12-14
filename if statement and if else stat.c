// wap to check wheather a person is eligible for voting
// if cond.

#include<stdio.h>
void main()
{
    int age;
    scanf("%d", &age);
    printf("you have enter your age %d\n",age);
    if (age>18) 
    {
        printf("you can vote!");
    }
}        // output =(age>18) = you can vote, (age<18) skip the last code only print age.

 // now check if else cond.
     #include<stdio.h>
       void main()
     {
        int age;
     scanf("%d", &age);
     printf("you have enter your age %d\n",age);
      if (age>18) 
    {
        printf("you can vote!"); 
    }
      else
       {
          printf("you can not vote");       //output = if cond. is true then print if statement or cond false print the else statement.
          
      }
     }