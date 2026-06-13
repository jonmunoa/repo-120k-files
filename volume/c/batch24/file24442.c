// fichero 24442 -- macros y constantes
#define LIMITE_24442 24542
#define FACTOR_24442 3

int aplicar_limite24442(int valor) {
    if (valor > LIMITE_24442) return LIMITE_24442;
    return valor * FACTOR_24442;
}
