// fichero 46626 -- macros y constantes
#define LIMITE_46626 46726
#define FACTOR_46626 2

int aplicar_limite46626(int valor) {
    if (valor > LIMITE_46626) return LIMITE_46626;
    return valor * FACTOR_46626;
}
