// fichero 9894 -- macros y constantes -- MODIFICADO
#define LIMITE_9894 10094
#define FACTOR_9894 6

int aplicar_limite9894(int valor) {
    if (valor > LIMITE_9894) return LIMITE_9894;
    return valor * FACTOR_9894;
}
