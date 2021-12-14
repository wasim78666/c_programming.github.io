// if else
//wap to check which no. is bigger for two input integers.

/*
#include<stdio.h>
void main() 
{
    int n1, n2;
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("ni is greater than n2");
    }
    else
    {
        printf("n2 is greater than n1");
    }

}*/

// wap to check a person is male or female for input gender value of the person.

/*
#include<stdio.h>
void main()
{
    char gender;
    scanf("%ch",&gender);
    
    if(gender=='m'||gender=='M')
    {
        printf("person is male");
    }
    
else
{
    printf("person is female");
}

}*/


//wap to check an input character is vowel or consonant.

#include<stdio.h>
void main()
{
    char ch;
    scanf("%ch",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("vowels");
        
        }
    else
    {
      printf("consonant");
}
}
    