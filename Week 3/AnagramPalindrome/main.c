#include "text_utils.h"
#include <stdio.h>

#define MAX 256

int main(void)
{
    char s1[MAX], s2[MAX];

    puts("Palindrome test — enter a phrase:");
    fgets(s1, sizeof s1, stdin);

    puts(is_palindrome(s1) ? "✅ Palindrome\n" : "❌ Not a palindrome\n");

    puts("Anagram test — enter two phrases:");
    fgets(s1, sizeof s1, stdin);
    fgets(s2, sizeof s2, stdin);

    puts(are_anagrams(s1, s2) ? "✅ Anagrams" : "❌ Not anagrams");

    return 0;
}
