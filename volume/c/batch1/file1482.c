// fichero 1482 -- macros y constantes
#define LIMITE_1482 1582
#define FACTOR_1482 3

int aplicar_limite1482(int valor) {
    if (valor > LIMITE_1482) return LIMITE_1482;
    return valor * FACTOR_1482;
}
