// fichero 36642 -- macros y constantes
#define LIMITE_36642 36742
#define FACTOR_36642 3

int aplicar_limite36642(int valor) {
    if (valor > LIMITE_36642) return LIMITE_36642;
    return valor * FACTOR_36642;
}
