#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    char s1[50],s2[20];
    printf("Enter string\n");
    fgets(s2,50,stdin);
    s2[strlen(s2)-1]='\0';
    c=strlen(s2);
    printf("Enter string\n");
    fgets(s1,20,stdin);
    s1[strlen(s1)-1]='\0';
    for(int i=0;s2[i]!='\0';i++)
    {
        s2[c+i]+=s1[i];
    }
    printf("concatenated string is \n");
    puts(s2);
    return 0;
}