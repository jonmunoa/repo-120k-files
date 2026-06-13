// fichero 23642 -- macros y constantes
#define LIMITE_23642 23742
#define FACTOR_23642 3

int aplicar_limite23642(int valor) {
    if (valor > LIMITE_23642) return LIMITE_23642;
    return valor * FACTOR_23642;
}
