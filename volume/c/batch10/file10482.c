// fichero 10482 -- macros y constantes
#define LIMITE_10482 10582
#define FACTOR_10482 3

int aplicar_limite10482(int valor) {
    if (valor > LIMITE_10482) return LIMITE_10482;
    return valor * FACTOR_10482;
}
