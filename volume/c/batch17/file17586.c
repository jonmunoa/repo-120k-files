// fichero 17586 -- macros y constantes
#define LIMITE_17586 17686
#define FACTOR_17586 2

int aplicar_limite17586(int valor) {
    if (valor > LIMITE_17586) return LIMITE_17586;
    return valor * FACTOR_17586;
}
