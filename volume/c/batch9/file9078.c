// fichero 9078 -- macros y constantes
#define LIMITE_9078 9178
#define FACTOR_9078 4

int aplicar_limite9078(int valor) {
    if (valor > LIMITE_9078) return LIMITE_9078;
    return valor * FACTOR_9078;
}
