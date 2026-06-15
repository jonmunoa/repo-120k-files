// fichero 19598 -- macros y constantes -- MODIFICADO
#define LIMITE_19598 19798
#define FACTOR_19598 5

int aplicar_limite19598(int valor) {
    if (valor > LIMITE_19598) return LIMITE_19598;
    return valor * FACTOR_19598;
}
