// fichero 9494 -- macros y constantes -- MODIFICADO
#define LIMITE_9494 9694
#define FACTOR_9494 6

int aplicar_limite9494(int valor) {
    if (valor > LIMITE_9494) return LIMITE_9494;
    return valor * FACTOR_9494;
}
