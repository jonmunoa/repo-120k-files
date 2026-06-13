// fichero 6442 -- macros y constantes
#define LIMITE_6442 6542
#define FACTOR_6442 3

int aplicar_limite6442(int valor) {
    if (valor > LIMITE_6442) return LIMITE_6442;
    return valor * FACTOR_6442;
}
