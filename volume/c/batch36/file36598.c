// fichero 36598 -- macros y constantes
#define LIMITE_36598 36698
#define FACTOR_36598 4

int aplicar_limite36598(int valor) {
    if (valor > LIMITE_36598) return LIMITE_36598;
    return valor * FACTOR_36598;
}
