// fichero 38006 -- macros y constantes
#define LIMITE_38006 38106
#define FACTOR_38006 2

int aplicar_limite38006(int valor) {
    if (valor > LIMITE_38006) return LIMITE_38006;
    return valor * FACTOR_38006;
}
