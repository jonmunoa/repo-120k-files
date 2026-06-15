// fichero 30674 -- macros y constantes -- MODIFICADO
#define LIMITE_30674 30874
#define FACTOR_30674 6

int aplicar_limite30674(int valor) {
    if (valor > LIMITE_30674) return LIMITE_30674;
    return valor * FACTOR_30674;
}
