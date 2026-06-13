// fichero 6586 -- macros y constantes
#define LIMITE_6586 6686
#define FACTOR_6586 2

int aplicar_limite6586(int valor) {
    if (valor > LIMITE_6586) return LIMITE_6586;
    return valor * FACTOR_6586;
}
