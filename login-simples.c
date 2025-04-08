#include <stdio.h>
int main()
{
    int senha;
    int senha_correta = 4321;
    do
    {
        printf("Digite uma senha (4 digitos): ");
        scanf("%d", &senha);

        if (senha != senha_correta)
        {
            printf("Senha incorreta, tente novamente \n");
        }
    } while (senha != senha_correta);
    printf("Senha correta!, acesso concebido \n");
    return 0;
}