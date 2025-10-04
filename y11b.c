// ROLL NUMBER : 167 - B - CT
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[10]="silent";
    char str2[10]="listen";
    int freq[26]={0};
    for(int i=0;str1[i]!='\0';i++)
    {
        freq[str1[i]-'a']++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        freq[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}