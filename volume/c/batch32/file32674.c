// fichero 32674 -- macros y constantes -- MODIFICADO
#define LIMITE_32674 32874
#define FACTOR_32674 6

int aplicar_limite32674(int valor) {
    if (valor > LIMITE_32674) return LIMITE_32674;
    return valor * FACTOR_32674;
}
