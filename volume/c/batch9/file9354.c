// fichero 9354 -- macros y constantes -- MODIFICADO
#define LIMITE_9354 9554
#define FACTOR_9354 6

int aplicar_limite9354(int valor) {
    if (valor > LIMITE_9354) return LIMITE_9354;
    return valor * FACTOR_9354;
}
