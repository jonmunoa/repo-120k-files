// fichero 29694 -- macros y constantes
#define LIMITE_29694 29794
#define FACTOR_29694 5

int aplicar_limite29694(int valor) {
    if (valor > LIMITE_29694) return LIMITE_29694;
    return valor * FACTOR_29694;
}
