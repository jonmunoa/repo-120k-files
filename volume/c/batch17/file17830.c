// fichero 17830 -- macros y constantes
#define LIMITE_17830 17930
#define FACTOR_17830 1

int aplicar_limite17830(int valor) {
    if (valor > LIMITE_17830) return LIMITE_17830;
    return valor * FACTOR_17830;
}
