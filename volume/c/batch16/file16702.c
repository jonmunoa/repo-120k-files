// fichero 16702 -- macros y constantes
#define LIMITE_16702 16802
#define FACTOR_16702 3

int aplicar_limite16702(int valor) {
    if (valor > LIMITE_16702) return LIMITE_16702;
    return valor * FACTOR_16702;
}
