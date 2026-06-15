// fichero 46598 -- macros y constantes -- MODIFICADO
#define LIMITE_46598 46798
#define FACTOR_46598 5

int aplicar_limite46598(int valor) {
    if (valor > LIMITE_46598) return LIMITE_46598;
    return valor * FACTOR_46598;
}
