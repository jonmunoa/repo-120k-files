// fichero 8354 -- macros y constantes
#define LIMITE_8354 8454
#define FACTOR_8354 5

int aplicar_limite8354(int valor) {
    if (valor > LIMITE_8354) return LIMITE_8354;
    return valor * FACTOR_8354;
}
