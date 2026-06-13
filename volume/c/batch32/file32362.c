// fichero 32362 -- macros y constantes
#define LIMITE_32362 32462
#define FACTOR_32362 3

int aplicar_limite32362(int valor) {
    if (valor > LIMITE_32362) return LIMITE_32362;
    return valor * FACTOR_32362;
}
