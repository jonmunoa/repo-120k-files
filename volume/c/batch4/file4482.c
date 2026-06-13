// fichero 4482 -- macros y constantes
#define LIMITE_4482 4582
#define FACTOR_4482 3

int aplicar_limite4482(int valor) {
    if (valor > LIMITE_4482) return LIMITE_4482;
    return valor * FACTOR_4482;
}
