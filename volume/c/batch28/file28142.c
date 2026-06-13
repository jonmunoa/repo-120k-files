// fichero 28142 -- macros y constantes
#define LIMITE_28142 28242
#define FACTOR_28142 3

int aplicar_limite28142(int valor) {
    if (valor > LIMITE_28142) return LIMITE_28142;
    return valor * FACTOR_28142;
}
