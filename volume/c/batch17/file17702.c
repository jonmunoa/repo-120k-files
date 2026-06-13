// fichero 17702 -- macros y constantes
#define LIMITE_17702 17802
#define FACTOR_17702 3

int aplicar_limite17702(int valor) {
    if (valor > LIMITE_17702) return LIMITE_17702;
    return valor * FACTOR_17702;
}
