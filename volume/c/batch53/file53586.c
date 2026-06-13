// fichero 53586 -- macros y constantes
#define LIMITE_53586 53686
#define FACTOR_53586 2

int aplicar_limite53586(int valor) {
    if (valor > LIMITE_53586) return LIMITE_53586;
    return valor * FACTOR_53586;
}
