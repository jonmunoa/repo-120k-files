// fichero 17362 -- macros y constantes
#define LIMITE_17362 17462
#define FACTOR_17362 3

int aplicar_limite17362(int valor) {
    if (valor > LIMITE_17362) return LIMITE_17362;
    return valor * FACTOR_17362;
}
