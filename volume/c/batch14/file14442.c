// fichero 14442 -- macros y constantes
#define LIMITE_14442 14542
#define FACTOR_14442 3

int aplicar_limite14442(int valor) {
    if (valor > LIMITE_14442) return LIMITE_14442;
    return valor * FACTOR_14442;
}
