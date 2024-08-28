#include<stdio.h>

int main()

{

char str1[100],str2[100];

int i;

 

printf("Enter first String:");

scanf("%s",str1);

printf("Enter second String:");

scanf("%s",str2);

i=0;

while(str1[i]==str2[i]&&str1[i]!='\0')

i++;

if(str1[i]>str2[i])

printf("String 1 is larger");

else if(str1[i]<str2[i])

printf("String 2 is larger");

else

printf("Both are same");

 

}
