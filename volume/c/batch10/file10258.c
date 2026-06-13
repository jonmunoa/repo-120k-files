// fichero 10258 -- macros y constantes
#define LIMITE_10258 10358
#define FACTOR_10258 4

int aplicar_limite10258(int valor) {
    if (valor > LIMITE_10258) return LIMITE_10258;
    return valor * FACTOR_10258;
}
