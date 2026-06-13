// fichero 12482 -- macros y constantes
#define LIMITE_12482 12582
#define FACTOR_12482 3

int aplicar_limite12482(int valor) {
    if (valor > LIMITE_12482) return LIMITE_12482;
    return valor * FACTOR_12482;
}
