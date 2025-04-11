#include <stdio.h>

int main() {
    int n; // declarando a variável.

while (1) { //loop inf. até o número ser válido.
    printf("Insira um número entre 1 e 10: ");
    scanf("%d", &n);

if (n < 1 || n > 10) { // definindo a condição.
    printf("Número Inválido!, Tente de novo.\n");
    continue; // volta ao início do while pois a condição não foi validada.
    }   

    break; // quebra o loop quando a condição é validada.
}

printf("Tabuada do %d:\n", n);
for(int i = 1; i <= 10; i++){ // definimos uma variável i, que começa com o valor = 1, ela vai se somando até chegar em 10, e se multiplicando com n. Assim temos a tabuada.
    printf("%d x %d = %d\n", n, i, n * i);
}

    return 0;
}
