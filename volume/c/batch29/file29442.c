// fichero 29442 -- macros y constantes
#define LIMITE_29442 29542
#define FACTOR_29442 3

int aplicar_limite29442(int valor) {
    if (valor > LIMITE_29442) return LIMITE_29442;
    return valor * FACTOR_29442;
}
