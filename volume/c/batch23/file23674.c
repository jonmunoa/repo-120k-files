// fichero 23674 -- macros y constantes -- MODIFICADO
#define LIMITE_23674 23874
#define FACTOR_23674 6

int aplicar_limite23674(int valor) {
    if (valor > LIMITE_23674) return LIMITE_23674;
    return valor * FACTOR_23674;
}
