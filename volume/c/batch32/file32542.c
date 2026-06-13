// fichero 32542 -- macros y constantes
#define LIMITE_32542 32642
#define FACTOR_32542 3

int aplicar_limite32542(int valor) {
    if (valor > LIMITE_32542) return LIMITE_32542;
    return valor * FACTOR_32542;
}
