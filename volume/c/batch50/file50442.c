// fichero 50442 -- macros y constantes
#define LIMITE_50442 50542
#define FACTOR_50442 3

int aplicar_limite50442(int valor) {
    if (valor > LIMITE_50442) return LIMITE_50442;
    return valor * FACTOR_50442;
}
