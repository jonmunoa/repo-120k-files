// fichero 26414 -- macros y constantes
#define LIMITE_26414 26514
#define FACTOR_26414 5

int aplicar_limite26414(int valor) {
    if (valor > LIMITE_26414) return LIMITE_26414;
    return valor * FACTOR_26414;
}
