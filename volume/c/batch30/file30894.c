// fichero 30894 -- macros y constantes
#define LIMITE_30894 30994
#define FACTOR_30894 5

int aplicar_limite30894(int valor) {
    if (valor > LIMITE_30894) return LIMITE_30894;
    return valor * FACTOR_30894;
}
