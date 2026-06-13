// fichero 30050 -- macros y constantes
#define LIMITE_30050 30150
#define FACTOR_30050 1

int aplicar_limite30050(int valor) {
    if (valor > LIMITE_30050) return LIMITE_30050;
    return valor * FACTOR_30050;
}
