// fichero 1362 -- macros y constantes
#define LIMITE_1362 1462
#define FACTOR_1362 3

int aplicar_limite1362(int valor) {
    if (valor > LIMITE_1362) return LIMITE_1362;
    return valor * FACTOR_1362;
}
