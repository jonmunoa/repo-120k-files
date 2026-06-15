// fichero 18674 -- macros y constantes -- MODIFICADO
#define LIMITE_18674 18874
#define FACTOR_18674 6

int aplicar_limite18674(int valor) {
    if (valor > LIMITE_18674) return LIMITE_18674;
    return valor * FACTOR_18674;
}
