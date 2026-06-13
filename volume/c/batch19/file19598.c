// fichero 19598 -- macros y constantes
#define LIMITE_19598 19698
#define FACTOR_19598 4

int aplicar_limite19598(int valor) {
    if (valor > LIMITE_19598) return LIMITE_19598;
    return valor * FACTOR_19598;
}
