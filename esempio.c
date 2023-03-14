#include  <stdio.h>

int main() {
    int age;
    char sesso;
    printf("Sei maschio (M), femmina (F) o altro (N): ");
    scanf("%c", &sesso);
    printf("Hai inserito %c\n", sesso);
    printf("Inserisci la tua età: ");
    scanf("%d", &age);
    printf("Hai %d anni\n", age);
    return 0;
}