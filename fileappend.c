#include<stdio.h>

int main(int argc, char *argv[])

{

FILE *fp1,*fp2;

char c;

fp1=fopen(argv[1],"r");

fp2=fopen(argv[2],"a");

putc(' ',fp2);

while((c=getc(fp1))!=EOF)

{

putc(c,fp2);

}

fclose(fp1);

fclose(fp2);

fp2=fopen(argv[2],"r");

while((c=getc(fp2))!=EOF)

{

printf("%c",c);

}

printf("\nFile appnded successfully!!!");

fclose(fp2);

return 0;

}
