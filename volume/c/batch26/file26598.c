// fichero 26598 -- macros y constantes
#define LIMITE_26598 26698
#define FACTOR_26598 4

int aplicar_limite26598(int valor) {
    if (valor > LIMITE_26598) return LIMITE_26598;
    return valor * FACTOR_26598;
}
