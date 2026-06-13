// fichero 16586 -- macros y constantes
#define LIMITE_16586 16686
#define FACTOR_16586 2

int aplicar_limite16586(int valor) {
    if (valor > LIMITE_16586) return LIMITE_16586;
    return valor * FACTOR_16586;
}
