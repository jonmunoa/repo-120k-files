// fichero 36674 -- macros y constantes -- MODIFICADO
#define LIMITE_36674 36874
#define FACTOR_36674 6

int aplicar_limite36674(int valor) {
    if (valor > LIMITE_36674) return LIMITE_36674;
    return valor * FACTOR_36674;
}
