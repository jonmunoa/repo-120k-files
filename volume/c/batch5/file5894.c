// fichero 5894 -- macros y constantes
#define LIMITE_5894 5994
#define FACTOR_5894 5

int aplicar_limite5894(int valor) {
    if (valor > LIMITE_5894) return LIMITE_5894;
    return valor * FACTOR_5894;
}
