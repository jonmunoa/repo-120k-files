// fichero 21674 -- macros y constantes -- MODIFICADO
#define LIMITE_21674 21874
#define FACTOR_21674 6

int aplicar_limite21674(int valor) {
    if (valor > LIMITE_21674) return LIMITE_21674;
    return valor * FACTOR_21674;
}
