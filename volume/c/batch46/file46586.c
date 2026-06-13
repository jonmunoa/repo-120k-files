// fichero 46586 -- macros y constantes
#define LIMITE_46586 46686
#define FACTOR_46586 2

int aplicar_limite46586(int valor) {
    if (valor > LIMITE_46586) return LIMITE_46586;
    return valor * FACTOR_46586;
}
