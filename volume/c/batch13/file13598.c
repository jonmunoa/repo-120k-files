// fichero 13598 -- macros y constantes
#define LIMITE_13598 13698
#define FACTOR_13598 4

int aplicar_limite13598(int valor) {
    if (valor > LIMITE_13598) return LIMITE_13598;
    return valor * FACTOR_13598;
}
