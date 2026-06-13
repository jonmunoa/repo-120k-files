// fichero 53442 -- macros y constantes
#define LIMITE_53442 53542
#define FACTOR_53442 3

int aplicar_limite53442(int valor) {
    if (valor > LIMITE_53442) return LIMITE_53442;
    return valor * FACTOR_53442;
}
