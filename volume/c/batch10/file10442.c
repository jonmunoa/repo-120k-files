// fichero 10442 -- macros y constantes
#define LIMITE_10442 10542
#define FACTOR_10442 3

int aplicar_limite10442(int valor) {
    if (valor > LIMITE_10442) return LIMITE_10442;
    return valor * FACTOR_10442;
}
