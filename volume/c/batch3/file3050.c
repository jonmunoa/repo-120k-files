// fichero 3050 -- macros y constantes
#define LIMITE_3050 3150
#define FACTOR_3050 1

int aplicar_limite3050(int valor) {
    if (valor > LIMITE_3050) return LIMITE_3050;
    return valor * FACTOR_3050;
}
