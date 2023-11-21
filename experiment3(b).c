//program to find if character is vowel or consonant.
#include<stdio.h>
void main()
{
   char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("Character is a vowel.",ch);
}
else
{
printf("Character is a consonant.",ch);
}
}
