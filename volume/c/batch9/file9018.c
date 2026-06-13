// fichero 9018 -- macros y constantes
#define LIMITE_9018 9118
#define FACTOR_9018 4

int aplicar_limite9018(int valor) {
    if (valor > LIMITE_9018) return LIMITE_9018;
    return valor * FACTOR_9018;
}
