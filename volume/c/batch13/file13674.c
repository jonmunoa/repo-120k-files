// fichero 13674 -- macros y constantes
#define LIMITE_13674 13774
#define FACTOR_13674 5

int aplicar_limite13674(int valor) {
    if (valor > LIMITE_13674) return LIMITE_13674;
    return valor * FACTOR_13674;
}
