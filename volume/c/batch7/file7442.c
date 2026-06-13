// fichero 7442 -- macros y constantes
#define LIMITE_7442 7542
#define FACTOR_7442 3

int aplicar_limite7442(int valor) {
    if (valor > LIMITE_7442) return LIMITE_7442;
    return valor * FACTOR_7442;
}
