#include<stdio.h>

#include<string.h>

int main()

{

char str1[100];

int ch,len,f;

char str2[100];

len=0;

 

do

{

printf("\nMENU:\n1.Find Length\n2.String Comparison\n3.String Concatenation");

printf("\n4.String Copy\n5.Find Substring\n6.Exit");

printf("\nEnter your choice:");

scanf("%d",&ch);

switch(ch)

{

case 1:

printf("Enter a String:");

scanf("%s",str1);

len=strlen(str1);

printf("Length is: %d",len);

break;

case 2: printf("Enter first string:");

scanf("%s",str1);

printf("Enter second string:");

scanf("%s",str2);

if(strcmp(str1,str2)==0)

printf("Both are equal");

else if(strcmp(str1,str2)>0)

printf("String 1 is larger");

else

printf("String 2 is larger");

break;

case 3: printf("Enter first string:");

scanf("%s",str1);

printf("Enter second string:");

scanf("%s",str2);

strcat(str1,str2);

printf("String after concatenation: %s",str1);

break;

case 4:

printf("Enter a string:");

scanf("%s",str1);

strcpy(str2,str1);

printf("The two strings are %s and %s",str1,str2);

break;

case 5: printf("Enter a string");

scanf("%s",str1);

printf("Enter another string");

scanf("%s",str2);

f=strstr(str1,str2);

if(f)

printf("Found ");

else

printf("Not Found");

case 6: break;

default: printf("Wrong choice");

}

}while(ch!=6);

 

return 0;

}
