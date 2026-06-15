// fichero 16674 -- macros y constantes -- MODIFICADO
#define LIMITE_16674 16874
#define FACTOR_16674 6

int aplicar_limite16674(int valor) {
    if (valor > LIMITE_16674) return LIMITE_16674;
    return valor * FACTOR_16674;
}
