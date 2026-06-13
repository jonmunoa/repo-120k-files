// fichero 18362 -- macros y constantes
#define LIMITE_18362 18462
#define FACTOR_18362 3

int aplicar_limite18362(int valor) {
    if (valor > LIMITE_18362) return LIMITE_18362;
    return valor * FACTOR_18362;
}
