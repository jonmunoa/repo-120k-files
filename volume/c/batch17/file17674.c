// fichero 17674 -- macros y constantes
#define LIMITE_17674 17774
#define FACTOR_17674 5

int aplicar_limite17674(int valor) {
    if (valor > LIMITE_17674) return LIMITE_17674;
    return valor * FACTOR_17674;
}
