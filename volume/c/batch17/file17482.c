// fichero 17482 -- macros y constantes
#define LIMITE_17482 17582
#define FACTOR_17482 3

int aplicar_limite17482(int valor) {
    if (valor > LIMITE_17482) return LIMITE_17482;
    return valor * FACTOR_17482;
}
