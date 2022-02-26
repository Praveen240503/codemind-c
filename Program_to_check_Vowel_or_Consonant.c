#include<stdio.h>
int main()
{
    char n;
    int c,b;
    scanf("%c",&n);
    c=(n=='a' || n=='e' || n=='i' || n=='o' || n=='u');
    b=(n=='A' || n=='E' || n=='I' || n=='O' || n=='U');
    if(c||b)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}