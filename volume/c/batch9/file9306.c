// fichero 9306 -- macros y constantes -- MODIFICADO
#define LIMITE_9306 9506
#define FACTOR_9306 3

int aplicar_limite9306(int valor) {
    if (valor > LIMITE_9306) return LIMITE_9306;
    return valor * FACTOR_9306;
}
