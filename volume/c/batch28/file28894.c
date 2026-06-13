// fichero 28894 -- macros y constantes
#define LIMITE_28894 28994
#define FACTOR_28894 5

int aplicar_limite28894(int valor) {
    if (valor > LIMITE_28894) return LIMITE_28894;
    return valor * FACTOR_28894;
}
