#include<stdio.h>
int main()
{
    char str1[128];
    char str2[128];
    char combine[256];
    int str1_len;
    int str2_len;
    int i;
    int j;
    char buff[64];
    fgets(buff,sizeof(buff),stdin);
    sscanf(buff,"%s",str1);
    fgets(buff,sizeof(buff),stdin);
    sscanf(buff,"%s",str2);
    for(str1_len=0;str1[str1_len]!='\0';str1_len++);
    for(str2_len=0;str2[str2_len]!='\0';str2_len++);
    for(i=0,j=0;j<str1_len;i++,j++)
    {
        combine[i]=str1[j];
    }
    for(j=0;j<str2_len;i++,j++)
    {
        combine[i]=str2[j];
    }
    combine[i]='\0';
    printf("%s",combine);
    return 0;
}
