// fichero 2586 -- macros y constantes
#define LIMITE_2586 2686
#define FACTOR_2586 2

int aplicar_limite2586(int valor) {
    if (valor > LIMITE_2586) return LIMITE_2586;
    return valor * FACTOR_2586;
}
