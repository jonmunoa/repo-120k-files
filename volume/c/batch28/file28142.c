// fichero 28142 -- macros y constantes -- MODIFICADO
#define LIMITE_28142 28342
#define FACTOR_28142 4

int aplicar_limite28142(int valor) {
    if (valor > LIMITE_28142) return LIMITE_28142;
    return valor * FACTOR_28142;
}
