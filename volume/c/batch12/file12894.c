// fichero 12894 -- macros y constantes
#define LIMITE_12894 12994
#define FACTOR_12894 5

int aplicar_limite12894(int valor) {
    if (valor > LIMITE_12894) return LIMITE_12894;
    return valor * FACTOR_12894;
}
