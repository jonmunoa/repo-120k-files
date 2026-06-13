// fichero 50362 -- macros y constantes
#define LIMITE_50362 50462
#define FACTOR_50362 3

int aplicar_limite50362(int valor) {
    if (valor > LIMITE_50362) return LIMITE_50362;
    return valor * FACTOR_50362;
}
