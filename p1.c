#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[20];
    printf("Enter string\n");
    fgets(s,20,stdin);
    for(int i=0;s[i]!='\0';i++){
        c++;
    }
    printf("String length is %d",c-1);
    return 0;
}