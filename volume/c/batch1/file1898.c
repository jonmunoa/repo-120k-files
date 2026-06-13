// fichero 1898 -- macros y constantes
#define LIMITE_1898 1998
#define FACTOR_1898 4

int aplicar_limite1898(int valor) {
    if (valor > LIMITE_1898) return LIMITE_1898;
    return valor * FACTOR_1898;
}
