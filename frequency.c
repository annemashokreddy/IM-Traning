#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],results;
    int i,len;
    int max=0,fre[256]={0};
    printf("enter a string:");
    scanf("%s",str);
    len=strlen(str);
    printf("the length of a string:%d\n",len);
    {
    for(i=0;i<len;i++)
    fre[str[i]]++;
    }
    
        for(i=0;i<len;i++){
            if(max<=fre[str[i]]){
        max=fre[str[i]];
        results=str[i];
    }
        }

    printf("maximum length of a string:%c  %d times",results,max);
     return 0;   
    } 
