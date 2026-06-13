// fichero 14894 -- macros y constantes
#define LIMITE_14894 14994
#define FACTOR_14894 5

int aplicar_limite14894(int valor) {
    if (valor > LIMITE_14894) return LIMITE_14894;
    return valor * FACTOR_14894;
}
