// fichero 8862 -- macros y constantes
#define LIMITE_8862 8962
#define FACTOR_8862 3

int aplicar_limite8862(int valor) {
    if (valor > LIMITE_8862) return LIMITE_8862;
    return valor * FACTOR_8862;
}
