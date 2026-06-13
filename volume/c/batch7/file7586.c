// fichero 7586 -- macros y constantes
#define LIMITE_7586 7686
#define FACTOR_7586 2

int aplicar_limite7586(int valor) {
    if (valor > LIMITE_7586) return LIMITE_7586;
    return valor * FACTOR_7586;
}
