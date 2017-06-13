#include<stdio.h>
void main()
{
char a;
clrscr();
scanf("%s",&a);
if((a=='a'||a=='e'||a=='i'||a=='o'||a=='u')||(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'))
{
printf("%d character is vowel",a);
}
else
{
printf("%d character is consonant",a);
}
getch();
}
