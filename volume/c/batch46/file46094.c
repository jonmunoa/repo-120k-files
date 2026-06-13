// fichero 46094 -- macros y constantes
#define LIMITE_46094 46194
#define FACTOR_46094 5

int aplicar_limite46094(int valor) {
    if (valor > LIMITE_46094) return LIMITE_46094;
    return valor * FACTOR_46094;
}
