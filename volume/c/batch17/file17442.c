// fichero 17442 -- macros y constantes
#define LIMITE_17442 17542
#define FACTOR_17442 3

int aplicar_limite17442(int valor) {
    if (valor > LIMITE_17442) return LIMITE_17442;
    return valor * FACTOR_17442;
}
