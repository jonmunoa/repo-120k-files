// fichero 9834 -- macros y constantes -- MODIFICADO
#define LIMITE_9834 10034
#define FACTOR_9834 6

int aplicar_limite9834(int valor) {
    if (valor > LIMITE_9834) return LIMITE_9834;
    return valor * FACTOR_9834;
}
