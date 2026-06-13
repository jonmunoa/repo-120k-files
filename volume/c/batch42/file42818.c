// fichero 42818 -- macros y constantes
#define LIMITE_42818 42918
#define FACTOR_42818 4

int aplicar_limite42818(int valor) {
    if (valor > LIMITE_42818) return LIMITE_42818;
    return valor * FACTOR_42818;
}
