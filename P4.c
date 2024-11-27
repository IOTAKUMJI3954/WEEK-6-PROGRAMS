#include<stdio.h>
#include<string.h>
int main()
{
    char s2[50];
    printf("Enter string\n");
    fgets(s2,50,stdin);
    s2[strlen(s2)-1]='\0';
    for(int i=0;s2[i]!='\0';i++){
     if(s2[i]>=97 && s2[i]<=122)
        s2[i]=s2[i]-32;
    }
    printf("Uppercase string is \n");
    puts(s2);
    return 0;
}