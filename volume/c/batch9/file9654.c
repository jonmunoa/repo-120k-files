// fichero 9654 -- macros y constantes -- MODIFICADO
#define LIMITE_9654 9854
#define FACTOR_9654 6

int aplicar_limite9654(int valor) {
    if (valor > LIMITE_9654) return LIMITE_9654;
    return valor * FACTOR_9654;
}
