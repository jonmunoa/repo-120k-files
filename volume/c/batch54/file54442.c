// fichero 54442 -- macros y constantes
#define LIMITE_54442 54542
#define FACTOR_54442 3

int aplicar_limite54442(int valor) {
    if (valor > LIMITE_54442) return LIMITE_54442;
    return valor * FACTOR_54442;
}
