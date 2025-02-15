#include<stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    if((a>='A' && a<='Z') || (a>='a' && a<='z')) {
        if (a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a'|| a=='e' 
        || a=='i' || a=='o' || a=='u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        } else if(a >= 0 && a <= 9) {
            printf("digit");
        } else {
            printf("Special Character");
        }
    return 0;
}