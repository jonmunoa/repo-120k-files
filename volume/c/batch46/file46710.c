// fichero 46710 -- macros y constantes
#define LIMITE_46710 46810
#define FACTOR_46710 1

int aplicar_limite46710(int valor) {
    if (valor > LIMITE_46710) return LIMITE_46710;
    return valor * FACTOR_46710;
}
