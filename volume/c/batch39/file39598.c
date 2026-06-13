// fichero 39598 -- macros y constantes
#define LIMITE_39598 39698
#define FACTOR_39598 4

int aplicar_limite39598(int valor) {
    if (valor > LIMITE_39598) return LIMITE_39598;
    return valor * FACTOR_39598;
}
