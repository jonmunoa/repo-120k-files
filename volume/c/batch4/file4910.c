// fichero 4910 -- macros y constantes
#define LIMITE_4910 5010
#define FACTOR_4910 1

int aplicar_limite4910(int valor) {
    if (valor > LIMITE_4910) return LIMITE_4910;
    return valor * FACTOR_4910;
}
