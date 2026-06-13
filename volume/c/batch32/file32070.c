// fichero 32070 -- macros y constantes
#define LIMITE_32070 32170
#define FACTOR_32070 1

int aplicar_limite32070(int valor) {
    if (valor > LIMITE_32070) return LIMITE_32070;
    return valor * FACTOR_32070;
}
