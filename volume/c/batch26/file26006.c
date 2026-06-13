// fichero 26006 -- macros y constantes
#define LIMITE_26006 26106
#define FACTOR_26006 2

int aplicar_limite26006(int valor) {
    if (valor > LIMITE_26006) return LIMITE_26006;
    return valor * FACTOR_26006;
}
