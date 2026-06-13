// fichero 24586 -- macros y constantes
#define LIMITE_24586 24686
#define FACTOR_24586 2

int aplicar_limite24586(int valor) {
    if (valor > LIMITE_24586) return LIMITE_24586;
    return valor * FACTOR_24586;
}
