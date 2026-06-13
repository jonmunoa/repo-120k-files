// fichero 1702 -- macros y constantes
#define LIMITE_1702 1802
#define FACTOR_1702 3

int aplicar_limite1702(int valor) {
    if (valor > LIMITE_1702) return LIMITE_1702;
    return valor * FACTOR_1702;
}
