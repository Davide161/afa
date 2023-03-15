#include <stdio.h>

int main() {
    char sesso;
    printf("Inserisci il tuo sesso:\n(M) maschio\n(F) femmina\n(N) non identificato\n");
    scanf("%c", &sesso);
    if (sesso == 'm' || sesso == 'M') {
        printf("Sei un maschio\n");
    } else if (sesso == 'f' || sesso == 'F') {
        printf("Sei una femmina\n");
    } else if (sesso == 'n' || sesso == 'N') {
        printf("Il tuo sesso non è identificato\n");
    } else {
        printf("\033[41mInserisci un valore tra M, F e N!\033[0m\n");
        return -1;
    }
    return 0;
}