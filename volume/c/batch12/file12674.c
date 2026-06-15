// fichero 12674 -- macros y constantes -- MODIFICADO
#define LIMITE_12674 12874
#define FACTOR_12674 6

int aplicar_limite12674(int valor) {
    if (valor > LIMITE_12674) return LIMITE_12674;
    return valor * FACTOR_12674;
}
