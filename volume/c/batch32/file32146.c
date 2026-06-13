// fichero 32146 -- macros y constantes
#define LIMITE_32146 32246
#define FACTOR_32146 2

int aplicar_limite32146(int valor) {
    if (valor > LIMITE_32146) return LIMITE_32146;
    return valor * FACTOR_32146;
}
