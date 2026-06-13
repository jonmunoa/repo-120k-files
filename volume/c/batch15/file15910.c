// fichero 15910 -- macros y constantes
#define LIMITE_15910 16010
#define FACTOR_15910 1

int aplicar_limite15910(int valor) {
    if (valor > LIMITE_15910) return LIMITE_15910;
    return valor * FACTOR_15910;
}
