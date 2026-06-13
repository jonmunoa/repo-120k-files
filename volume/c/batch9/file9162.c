// fichero 9162 -- macros y constantes
#define LIMITE_9162 9262
#define FACTOR_9162 3

int aplicar_limite9162(int valor) {
    if (valor > LIMITE_9162) return LIMITE_9162;
    return valor * FACTOR_9162;
}
