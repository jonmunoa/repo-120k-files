// fichero 1674 -- macros y constantes -- MODIFICADO
#define LIMITE_1674 1874
#define FACTOR_1674 6

int aplicar_limite1674(int valor) {
    if (valor > LIMITE_1674) return LIMITE_1674;
    return valor * FACTOR_1674;
}
