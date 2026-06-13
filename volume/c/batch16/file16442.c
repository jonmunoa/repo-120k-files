// fichero 16442 -- macros y constantes
#define LIMITE_16442 16542
#define FACTOR_16442 3

int aplicar_limite16442(int valor) {
    if (valor > LIMITE_16442) return LIMITE_16442;
    return valor * FACTOR_16442;
}
