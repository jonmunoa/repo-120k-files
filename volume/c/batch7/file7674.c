// fichero 7674 -- macros y constantes -- MODIFICADO
#define LIMITE_7674 7874
#define FACTOR_7674 6

int aplicar_limite7674(int valor) {
    if (valor > LIMITE_7674) return LIMITE_7674;
    return valor * FACTOR_7674;
}
