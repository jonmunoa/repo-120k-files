// fichero 46006 -- macros y constantes -- MODIFICADO
#define LIMITE_46006 46206
#define FACTOR_46006 3

int aplicar_limite46006(int valor) {
    if (valor > LIMITE_46006) return LIMITE_46006;
    return valor * FACTOR_46006;
}
