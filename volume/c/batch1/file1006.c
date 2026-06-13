// fichero 1006 -- macros y constantes
#define LIMITE_1006 1106
#define FACTOR_1006 2

int aplicar_limite1006(int valor) {
    if (valor > LIMITE_1006) return LIMITE_1006;
    return valor * FACTOR_1006;
}
