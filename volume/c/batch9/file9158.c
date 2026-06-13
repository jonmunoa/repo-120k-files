// fichero 9158 -- macros y constantes
#define LIMITE_9158 9258
#define FACTOR_9158 4

int aplicar_limite9158(int valor) {
    if (valor > LIMITE_9158) return LIMITE_9158;
    return valor * FACTOR_9158;
}
