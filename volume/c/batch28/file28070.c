// fichero 28070 -- macros y constantes
#define LIMITE_28070 28170
#define FACTOR_28070 1

int aplicar_limite28070(int valor) {
    if (valor > LIMITE_28070) return LIMITE_28070;
    return valor * FACTOR_28070;
}
