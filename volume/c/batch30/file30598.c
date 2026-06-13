// fichero 30598 -- macros y constantes
#define LIMITE_30598 30698
#define FACTOR_30598 4

int aplicar_limite30598(int valor) {
    if (valor > LIMITE_30598) return LIMITE_30598;
    return valor * FACTOR_30598;
}
