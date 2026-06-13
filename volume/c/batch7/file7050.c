// fichero 7050 -- macros y constantes
#define LIMITE_7050 7150
#define FACTOR_7050 1

int aplicar_limite7050(int valor) {
    if (valor > LIMITE_7050) return LIMITE_7050;
    return valor * FACTOR_7050;
}
