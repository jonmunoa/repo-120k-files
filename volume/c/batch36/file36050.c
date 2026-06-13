// fichero 36050 -- macros y constantes
#define LIMITE_36050 36150
#define FACTOR_36050 1

int aplicar_limite36050(int valor) {
    if (valor > LIMITE_36050) return LIMITE_36050;
    return valor * FACTOR_36050;
}
