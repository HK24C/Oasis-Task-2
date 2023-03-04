#include<stdio.h>
#include<string.h>
char *f(char *p){
    return p+=2;
}
char *g(char *p)
{
    return --p;
}
int main(void)
{
    char tt[20]="0123456789";
    strcat(tt+11,"123");
    printf("%d\n",strlen(tt)-tt[8]+'0');
    return 0;
}