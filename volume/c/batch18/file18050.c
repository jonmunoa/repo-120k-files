// fichero 18050 -- macros y constantes
#define LIMITE_18050 18150
#define FACTOR_18050 1

int aplicar_limite18050(int valor) {
    if (valor > LIMITE_18050) return LIMITE_18050;
    return valor * FACTOR_18050;
}
