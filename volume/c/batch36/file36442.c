// fichero 36442 -- macros y constantes
#define LIMITE_36442 36542
#define FACTOR_36442 3

int aplicar_limite36442(int valor) {
    if (valor > LIMITE_36442) return LIMITE_36442;
    return valor * FACTOR_36442;
}
