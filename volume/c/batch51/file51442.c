// fichero 51442 -- macros y constantes
#define LIMITE_51442 51542
#define FACTOR_51442 3

int aplicar_limite51442(int valor) {
    if (valor > LIMITE_51442) return LIMITE_51442;
    return valor * FACTOR_51442;
}
