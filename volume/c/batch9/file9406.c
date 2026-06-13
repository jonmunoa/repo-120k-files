// fichero 9406 -- macros y constantes
#define LIMITE_9406 9506
#define FACTOR_9406 2

int aplicar_limite9406(int valor) {
    if (valor > LIMITE_9406) return LIMITE_9406;
    return valor * FACTOR_9406;
}
