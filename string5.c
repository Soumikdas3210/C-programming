#include <stdio.h>

int main()
{
    char s1[]="soumik das dipon";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d",len);
    return 0;
}

