// fichero 38342 -- macros y constantes -- MODIFICADO
#define LIMITE_38342 38542
#define FACTOR_38342 4

int aplicar_limite38342(int valor) {
    if (valor > LIMITE_38342) return LIMITE_38342;
    return valor * FACTOR_38342;
}
