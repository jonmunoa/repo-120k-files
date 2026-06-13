// fichero 38586 -- macros y constantes
#define LIMITE_38586 38686
#define FACTOR_38586 2

int aplicar_limite38586(int valor) {
    if (valor > LIMITE_38586) return LIMITE_38586;
    return valor * FACTOR_38586;
}
