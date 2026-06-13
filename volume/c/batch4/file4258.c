// fichero 4258 -- macros y constantes
#define LIMITE_4258 4358
#define FACTOR_4258 4

int aplicar_limite4258(int valor) {
    if (valor > LIMITE_4258) return LIMITE_4258;
    return valor * FACTOR_4258;
}
