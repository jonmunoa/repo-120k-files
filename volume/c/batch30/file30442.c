// fichero 30442 -- macros y constantes
#define LIMITE_30442 30542
#define FACTOR_30442 3

int aplicar_limite30442(int valor) {
    if (valor > LIMITE_30442) return LIMITE_30442;
    return valor * FACTOR_30442;
}
