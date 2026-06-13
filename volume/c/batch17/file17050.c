// fichero 17050 -- macros y constantes
#define LIMITE_17050 17150
#define FACTOR_17050 1

int aplicar_limite17050(int valor) {
    if (valor > LIMITE_17050) return LIMITE_17050;
    return valor * FACTOR_17050;
}
