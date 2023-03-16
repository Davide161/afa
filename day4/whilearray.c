#include <stdio.h> 

int main () {
    int i = 0;
    int n, max, min;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    int array[n];
    printf("Inserisci %d numeri: \n", n);
    while(i<n) {
        scanf("%d", &array[i]);
        i++;
    }
    i = 1;
    max = array[0];
    while(i<n) {
        if(max < array[i]) {
            max = array[i];
        } else {}
        i++;
    }
    i = 1;
    min = array[0];
    while(i<n) {
        if(min > array[i]) {
            min = array[i];
        } else {}
        i++;
    }
    printf("Numero maggiore: %d\nNumero minore: %d\n", max, min);
    return 0;
}