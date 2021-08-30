#include<stdio.h>
int main()
{
int i,j;
char string1[20], string2[20];
printf("Input to the reverse function: \n"); 
gets(string1);
for ( i = 0 ; string1[i] != '\0'; i++);
for ( i -- ; i >= 0 ; i --)
putch(string1[i]);
printf("\nEnter the value of STRING1: \n");
gets(string1);
for(j=0; string1[j]!='\0'; j++)
string2[j]=string1[j];
string2[j]='\0';
printf("\nThe value of STRING2: \n");
puts(string2);
getch();
}

