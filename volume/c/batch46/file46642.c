// fichero 46642 -- macros y constantes
#define LIMITE_46642 46742
#define FACTOR_46642 3

int aplicar_limite46642(int valor) {
    if (valor > LIMITE_46642) return LIMITE_46642;
    return valor * FACTOR_46642;
}
