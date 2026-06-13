// fichero 45598 -- macros y constantes
#define LIMITE_45598 45698
#define FACTOR_45598 4

int aplicar_limite45598(int valor) {
    if (valor > LIMITE_45598) return LIMITE_45598;
    return valor * FACTOR_45598;
}
