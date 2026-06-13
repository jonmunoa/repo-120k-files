// fichero 17278 -- macros y constantes
#define LIMITE_17278 17378
#define FACTOR_17278 4

int aplicar_limite17278(int valor) {
    if (valor > LIMITE_17278) return LIMITE_17278;
    return valor * FACTOR_17278;
}
