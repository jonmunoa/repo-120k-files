// fichero 25442 -- macros y constantes
#define LIMITE_25442 25542
#define FACTOR_25442 3

int aplicar_limite25442(int valor) {
    if (valor > LIMITE_25442) return LIMITE_25442;
    return valor * FACTOR_25442;
}
