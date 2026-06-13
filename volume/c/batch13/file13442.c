// fichero 13442 -- macros y constantes
#define LIMITE_13442 13542
#define FACTOR_13442 3

int aplicar_limite13442(int valor) {
    if (valor > LIMITE_13442) return LIMITE_13442;
    return valor * FACTOR_13442;
}
