// fichero 7674 -- macros y constantes
#define LIMITE_7674 7774
#define FACTOR_7674 5

int aplicar_limite7674(int valor) {
    if (valor > LIMITE_7674) return LIMITE_7674;
    return valor * FACTOR_7674;
}
