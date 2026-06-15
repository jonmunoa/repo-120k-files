// fichero 9178 -- macros y constantes -- MODIFICADO
#define LIMITE_9178 9378
#define FACTOR_9178 5

int aplicar_limite9178(int valor) {
    if (valor > LIMITE_9178) return LIMITE_9178;
    return valor * FACTOR_9178;
}
