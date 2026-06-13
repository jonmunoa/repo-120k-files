// fichero 1786 -- macros y constantes
#define LIMITE_1786 1886
#define FACTOR_1786 2

int aplicar_limite1786(int valor) {
    if (valor > LIMITE_1786) return LIMITE_1786;
    return valor * FACTOR_1786;
}
