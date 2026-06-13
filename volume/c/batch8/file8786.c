// fichero 8786 -- macros y constantes
#define LIMITE_8786 8886
#define FACTOR_8786 2

int aplicar_limite8786(int valor) {
    if (valor > LIMITE_8786) return LIMITE_8786;
    return valor * FACTOR_8786;
}
