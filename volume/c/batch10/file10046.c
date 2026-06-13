// fichero 10046 -- macros y constantes
#define LIMITE_10046 10146
#define FACTOR_10046 2

int aplicar_limite10046(int valor) {
    if (valor > LIMITE_10046) return LIMITE_10046;
    return valor * FACTOR_10046;
}
