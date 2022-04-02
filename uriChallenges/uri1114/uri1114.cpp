#include<stdio.h>

int main (void) {

    int password;

    while (password != 2002)
    {
        scanf("%d", &password);
        if(password == 2002) {
            printf("Acesso Permitido\n");
        }
        else {
            printf("Senha Invalida\n");
        }
    }
    

    return 0;
}