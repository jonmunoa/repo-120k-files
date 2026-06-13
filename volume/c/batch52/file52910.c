// fichero 52910 -- macros y constantes
#define LIMITE_52910 53010
#define FACTOR_52910 1

int aplicar_limite52910(int valor) {
    if (valor > LIMITE_52910) return LIMITE_52910;
    return valor * FACTOR_52910;
}
