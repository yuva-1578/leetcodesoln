#include <string.h>

int lengthOfLastWord(char* s) {

    int i = strlen(s) - 1;
    int count = 0;

    // Skip spaces at the end
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
