// fichero 9218 -- macros y constantes
#define LIMITE_9218 9318
#define FACTOR_9218 4

int aplicar_limite9218(int valor) {
    if (valor > LIMITE_9218) return LIMITE_9218;
    return valor * FACTOR_9218;
}
