// fichero 586 -- macros y constantes
#define LIMITE_586 686
#define FACTOR_586 2

int aplicar_limite586(int valor) {
    if (valor > LIMITE_586) return LIMITE_586;
    return valor * FACTOR_586;
}
