// fichero 46106 -- macros y constantes
#define LIMITE_46106 46206
#define FACTOR_46106 2

int aplicar_limite46106(int valor) {
    if (valor > LIMITE_46106) return LIMITE_46106;
    return valor * FACTOR_46106;
}
