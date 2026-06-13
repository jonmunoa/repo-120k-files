// fichero 14910 -- macros y constantes
#define LIMITE_14910 15010
#define FACTOR_14910 1

int aplicar_limite14910(int valor) {
    if (valor > LIMITE_14910) return LIMITE_14910;
    return valor * FACTOR_14910;
}
