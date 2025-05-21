#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter text (Ctrl+D to end on Unix/Linux/Mac or Ctrl+Z on Windows):\n");

    while ((ch = getchar()) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    printf("\nCharacters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
