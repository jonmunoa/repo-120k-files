// fichero 9834 -- macros y constantes
#define LIMITE_9834 9934
#define FACTOR_9834 5

int aplicar_limite9834(int valor) {
    if (valor > LIMITE_9834) return LIMITE_9834;
    return valor * FACTOR_9834;
}
