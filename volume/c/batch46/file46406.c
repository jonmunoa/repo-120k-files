// fichero 46406 -- macros y constantes
#define LIMITE_46406 46506
#define FACTOR_46406 2

int aplicar_limite46406(int valor) {
    if (valor > LIMITE_46406) return LIMITE_46406;
    return valor * FACTOR_46406;
}
