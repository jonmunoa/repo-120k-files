// fichero 19442 -- macros y constantes
#define LIMITE_19442 19542
#define FACTOR_19442 3

int aplicar_limite19442(int valor) {
    if (valor > LIMITE_19442) return LIMITE_19442;
    return valor * FACTOR_19442;
}
