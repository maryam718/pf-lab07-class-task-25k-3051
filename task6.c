#include <stdio.h>

int main() {
    char word[100];
    int i = 0, vowels = 0, consonants =0,ch;

    printf("Enter a word: ");
    scanf("%s", word);

    while (word[i] != '\0') {
        char ch = word[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}

