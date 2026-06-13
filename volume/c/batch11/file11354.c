// fichero 11354 -- macros y constantes
#define LIMITE_11354 11454
#define FACTOR_11354 5

int aplicar_limite11354(int valor) {
    if (valor > LIMITE_11354) return LIMITE_11354;
    return valor * FACTOR_11354;
}
