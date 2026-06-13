// fichero 21442 -- macros y constantes
#define LIMITE_21442 21542
#define FACTOR_21442 3

int aplicar_limite21442(int valor) {
    if (valor > LIMITE_21442) return LIMITE_21442;
    return valor * FACTOR_21442;
}
