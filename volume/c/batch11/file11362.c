// fichero 11362 -- macros y constantes
#define LIMITE_11362 11462
#define FACTOR_11362 3

int aplicar_limite11362(int valor) {
    if (valor > LIMITE_11362) return LIMITE_11362;
    return valor * FACTOR_11362;
}
