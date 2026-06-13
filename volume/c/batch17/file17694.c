// fichero 17694 -- macros y constantes
#define LIMITE_17694 17794
#define FACTOR_17694 5

int aplicar_limite17694(int valor) {
    if (valor > LIMITE_17694) return LIMITE_17694;
    return valor * FACTOR_17694;
}
