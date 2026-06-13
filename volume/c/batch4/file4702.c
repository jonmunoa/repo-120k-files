// fichero 4702 -- macros y constantes
#define LIMITE_4702 4802
#define FACTOR_4702 3

int aplicar_limite4702(int valor) {
    if (valor > LIMITE_4702) return LIMITE_4702;
    return valor * FACTOR_4702;
}
