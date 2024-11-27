#include<stdio.h>
#include<string.h>
int main()
{
    int c,t;
    char s2[50];
    printf("Enter string\n");
    fgets(s2,50,stdin);
    s2[strlen(s2)-1]='\0';
    for(int i=0;s2[i]!='\0';i++){
        c++;
    }
    for(int i=0;i<c/2;i++){
        t=s2[i];
        s2[i]=s2[c-i-1];
        s2[c-i-1]=t;
    }
    printf("Reversed string is \n");
    puts(s2);
    return 0;
}