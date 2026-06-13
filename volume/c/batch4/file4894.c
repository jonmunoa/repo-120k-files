// fichero 4894 -- macros y constantes
#define LIMITE_4894 4994
#define FACTOR_4894 5

int aplicar_limite4894(int valor) {
    if (valor > LIMITE_4894) return LIMITE_4894;
    return valor * FACTOR_4894;
}
