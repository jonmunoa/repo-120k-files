// fichero 29842 -- macros y constantes
#define LIMITE_29842 29942
#define FACTOR_29842 3

int aplicar_limite29842(int valor) {
    if (valor > LIMITE_29842) return LIMITE_29842;
    return valor * FACTOR_29842;
}
