// fichero 10238 -- macros y constantes
#define LIMITE_10238 10338
#define FACTOR_10238 4

int aplicar_limite10238(int valor) {
    if (valor > LIMITE_10238) return LIMITE_10238;
    return valor * FACTOR_10238;
}
