// fichero 9230 -- macros y constantes
#define LIMITE_9230 9330
#define FACTOR_9230 1

int aplicar_limite9230(int valor) {
    if (valor > LIMITE_9230) return LIMITE_9230;
    return valor * FACTOR_9230;
}
