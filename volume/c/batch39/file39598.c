// fichero 39598 -- macros y constantes -- MODIFICADO
#define LIMITE_39598 39798
#define FACTOR_39598 5

int aplicar_limite39598(int valor) {
    if (valor > LIMITE_39598) return LIMITE_39598;
    return valor * FACTOR_39598;
}
