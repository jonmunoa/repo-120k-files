// fichero 10674 -- macros y constantes -- MODIFICADO
#define LIMITE_10674 10874
#define FACTOR_10674 6

int aplicar_limite10674(int valor) {
    if (valor > LIMITE_10674) return LIMITE_10674;
    return valor * FACTOR_10674;
}
