// fichero 1934 -- macros y constantes
#define LIMITE_1934 2034
#define FACTOR_1934 5

int aplicar_limite1934(int valor) {
    if (valor > LIMITE_1934) return LIMITE_1934;
    return valor * FACTOR_1934;
}
