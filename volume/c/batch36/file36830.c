// fichero 36830 -- macros y constantes
#define LIMITE_36830 36930
#define FACTOR_36830 1

int aplicar_limite36830(int valor) {
    if (valor > LIMITE_36830) return LIMITE_36830;
    return valor * FACTOR_36830;
}
