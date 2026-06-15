// fichero 17674 -- macros y constantes -- MODIFICADO
#define LIMITE_17674 17874
#define FACTOR_17674 6

int aplicar_limite17674(int valor) {
    if (valor > LIMITE_17674) return LIMITE_17674;
    return valor * FACTOR_17674;
}
