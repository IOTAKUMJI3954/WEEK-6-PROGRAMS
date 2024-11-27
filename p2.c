#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter string\n");
    fgets(s2,20,stdin);
    for(int i=0;s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    printf("copied string is ");
    puts(s1);
    return 0;
}