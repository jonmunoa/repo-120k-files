// fichero 32786 -- macros y constantes
#define LIMITE_32786 32886
#define FACTOR_32786 2

int aplicar_limite32786(int valor) {
    if (valor > LIMITE_32786) return LIMITE_32786;
    return valor * FACTOR_32786;
}
