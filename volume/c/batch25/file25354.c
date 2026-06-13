// fichero 25354 -- macros y constantes
#define LIMITE_25354 25454
#define FACTOR_25354 5

int aplicar_limite25354(int valor) {
    if (valor > LIMITE_25354) return LIMITE_25354;
    return valor * FACTOR_25354;
}
