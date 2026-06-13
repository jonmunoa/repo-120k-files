// fichero 3442 -- macros y constantes
#define LIMITE_3442 3542
#define FACTOR_3442 3

int aplicar_limite3442(int valor) {
    if (valor > LIMITE_3442) return LIMITE_3442;
    return valor * FACTOR_3442;
}
