// fichero 7362 -- macros y constantes
#define LIMITE_7362 7462
#define FACTOR_7362 3

int aplicar_limite7362(int valor) {
    if (valor > LIMITE_7362) return LIMITE_7362;
    return valor * FACTOR_7362;
}
