// fichero 52442 -- macros y constantes
#define LIMITE_52442 52542
#define FACTOR_52442 3

int aplicar_limite52442(int valor) {
    if (valor > LIMITE_52442) return LIMITE_52442;
    return valor * FACTOR_52442;
}
