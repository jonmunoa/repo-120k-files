// fichero 26910 -- macros y constantes
#define LIMITE_26910 27010
#define FACTOR_26910 1

int aplicar_limite26910(int valor) {
    if (valor > LIMITE_26910) return LIMITE_26910;
    return valor * FACTOR_26910;
}
