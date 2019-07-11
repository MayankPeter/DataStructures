#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
int i;
char s[6][30]={"git status\0","git add -A\0","git commit -m \"update\"\0","git push\0","mayankpeter003@gmail.com\0","233843@Mayank\0"};

for(i=0;i<6;i++)
{
system(s[i]);
//printf("%s\n",s[i]);
if(i==5 || i==6)
sleep(2);
else
sleep(1);
}
}
