#include <stdio.h>
#include <ctype.h>

int main() {
    int v = 0, con = 0;
    char s[50];
    char *c = s;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", s);

    while (*c != '\0') {
        printf("%c", *c);

        if (!isspace(*c)) {
            if (*c == 'A' || *c == 'a' || *c == 'E' || *c == 'e' || *c == 'I' || *c == 'i' || *c == 'O' || *c == 'o' || *c == 'U' || *c == 'u') {
                v++;
            } else {
                con++;
            }
        }
        c++;
    }

    printf("\n%d %d\n", v, con);

    return 0;
}
