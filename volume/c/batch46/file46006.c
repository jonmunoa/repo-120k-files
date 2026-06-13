// fichero 46006 -- macros y constantes
#define LIMITE_46006 46106
#define FACTOR_46006 2

int aplicar_limite46006(int valor) {
    if (valor > LIMITE_46006) return LIMITE_46006;
    return valor * FACTOR_46006;
}
