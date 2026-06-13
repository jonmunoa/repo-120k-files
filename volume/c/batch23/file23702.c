// fichero 23702 -- macros y constantes
#define LIMITE_23702 23802
#define FACTOR_23702 3

int aplicar_limite23702(int valor) {
    if (valor > LIMITE_23702) return LIMITE_23702;
    return valor * FACTOR_23702;
}
