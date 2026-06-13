// fichero 28050 -- macros y constantes
#define LIMITE_28050 28150
#define FACTOR_28050 1

int aplicar_limite28050(int valor) {
    if (valor > LIMITE_28050) return LIMITE_28050;
    return valor * FACTOR_28050;
}
