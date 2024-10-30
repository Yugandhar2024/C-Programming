// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':printf("VOWEL");
                break;
        default:printf("CONSTANT");
                break;
    }

    return 0;
}
