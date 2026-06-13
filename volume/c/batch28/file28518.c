// fichero 28518 -- macros y constantes
#define LIMITE_28518 28618
#define FACTOR_28518 4

int aplicar_limite28518(int valor) {
    if (valor > LIMITE_28518) return LIMITE_28518;
    return valor * FACTOR_28518;
}
