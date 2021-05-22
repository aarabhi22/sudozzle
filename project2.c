//program to detect the number of words in a given sentence
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int count=0,i;
    printf("enter the string\n");
    gets(str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            count++;
        }
    }
    printf("input:%s\n",str);
    printf("output:%d",count+1);
}
