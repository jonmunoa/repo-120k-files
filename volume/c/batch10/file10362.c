// fichero 10362 -- macros y constantes
#define LIMITE_10362 10462
#define FACTOR_10362 3

int aplicar_limite10362(int valor) {
    if (valor > LIMITE_10362) return LIMITE_10362;
    return valor * FACTOR_10362;
}
