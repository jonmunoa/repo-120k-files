// fichero 13354 -- macros y constantes
#define LIMITE_13354 13454
#define FACTOR_13354 5

int aplicar_limite13354(int valor) {
    if (valor > LIMITE_13354) return LIMITE_13354;
    return valor * FACTOR_13354;
}
