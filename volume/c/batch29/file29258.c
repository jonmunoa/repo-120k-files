// fichero 29258 -- macros y constantes
#define LIMITE_29258 29358
#define FACTOR_29258 4

int aplicar_limite29258(int valor) {
    if (valor > LIMITE_29258) return LIMITE_29258;
    return valor * FACTOR_29258;
}
