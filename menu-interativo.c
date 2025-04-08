#include <stdio.h>

int main() {
  int escolha;

  do {
    printf("MENU INTERATIVO\n");
    printf("Você tem as seguintes opções:\n");
    printf(" (1) Calcular se um número é par ou ímpar.\n");
    printf(" (2) Imprimir os antecessores de um número até 1.\n");
    printf(" (3) Sair do programa.\n");
    printf("Digite o número de uma das opções apresentadas: ");
    scanf("%d", &escolha);

    switch (escolha) {
      case 1:
        {
          int num1;
          printf("Digite um número: ");
          scanf("%d", &num1);
          printf("---\n%s\n", (num1 % 2 == 0) ? "Par\n---\n" : "Ímpar\n---\n");
        }
        break;

      case 2:
        {
          int num;
          printf("Digite um número: ");
          scanf("%d", &num);

          printf("---\n");
          for (int i = num - 1; i >= 1; i--) {
            printf("%d\n", i);
          }
          printf("---\n");
        }
        break;

      case 3:
        printf("---\nTchau!!! ;)\n---\n");
        break;

      default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }
  } while (escolha != 3);

  return 0;
}

