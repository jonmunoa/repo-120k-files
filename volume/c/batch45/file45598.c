// fichero 45598 -- macros y constantes -- MODIFICADO
#define LIMITE_45598 45798
#define FACTOR_45598 5

int aplicar_limite45598(int valor) {
    if (valor > LIMITE_45598) return LIMITE_45598;
    return valor * FACTOR_45598;
}
