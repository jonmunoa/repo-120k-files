// fichero 21050 -- macros y constantes
#define LIMITE_21050 21150
#define FACTOR_21050 1

int aplicar_limite21050(int valor) {
    if (valor > LIMITE_21050) return LIMITE_21050;
    return valor * FACTOR_21050;
}
