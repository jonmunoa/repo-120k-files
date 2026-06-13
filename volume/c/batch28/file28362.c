// fichero 28362 -- macros y constantes
#define LIMITE_28362 28462
#define FACTOR_28362 3

int aplicar_limite28362(int valor) {
    if (valor > LIMITE_28362) return LIMITE_28362;
    return valor * FACTOR_28362;
}
