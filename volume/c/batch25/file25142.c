// fichero 25142 -- macros y constantes -- MODIFICADO
#define LIMITE_25142 25342
#define FACTOR_25142 4

int aplicar_limite25142(int valor) {
    if (valor > LIMITE_25142) return LIMITE_25142;
    return valor * FACTOR_25142;
}
