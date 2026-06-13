// fichero 34442 -- macros y constantes
#define LIMITE_34442 34542
#define FACTOR_34442 3

int aplicar_limite34442(int valor) {
    if (valor > LIMITE_34442) return LIMITE_34442;
    return valor * FACTOR_34442;
}
