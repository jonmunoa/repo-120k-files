// fichero 7894 -- macros y constantes
#define LIMITE_7894 7994
#define FACTOR_7894 5

int aplicar_limite7894(int valor) {
    if (valor > LIMITE_7894) return LIMITE_7894;
    return valor * FACTOR_7894;
}
