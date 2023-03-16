#include <stdio.h>

int main () {
    system("shutdown");
    char stringa[] = "";
    printf("scrivi una parola\n");
    scanf(" %s", stringa);
    int i = 0;
    while(stringa[i] != '\0') {
        i++;
    }
    printf("La parola %s è lunga %d caratteri\n", stringa, i);
    return 0;
}
