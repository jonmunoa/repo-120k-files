// fichero 9118 -- macros y constantes
#define LIMITE_9118 9218
#define FACTOR_9118 4

int aplicar_limite9118(int valor) {
    if (valor > LIMITE_9118) return LIMITE_9118;
    return valor * FACTOR_9118;
}
