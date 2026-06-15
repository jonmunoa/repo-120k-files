// fichero 24586 -- macros y constantes -- MODIFICADO
#define LIMITE_24586 24786
#define FACTOR_24586 3

int aplicar_limite24586(int valor) {
    if (valor > LIMITE_24586) return LIMITE_24586;
    return valor * FACTOR_24586;
}
