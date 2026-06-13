// fichero 8482 -- macros y constantes
#define LIMITE_8482 8582
#define FACTOR_8482 3

int aplicar_limite8482(int valor) {
    if (valor > LIMITE_8482) return LIMITE_8482;
    return valor * FACTOR_8482;
}
