#include<stdio.h>
int main()
{
    char ch;
    int letter=0,space=0,num=0,others=0;
    while((ch=getchar())!='\n')
    {
        if(ch>='a'&&ch<='z')
        {
            letter++;
        }
        else if(ch==' ')
        {
            space++;
        }
        else if(ch>='0'&&ch<='9')
        {
            num++;
        }
        else
        {
            others++;
        }
    }
    printf("Number of letters=%d,Number of spaces=%d,Number of digits=%d,Number of others=%d\n",letter,space,num,others);

}
