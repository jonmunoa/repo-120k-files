// fichero 21142 -- macros y constantes -- MODIFICADO
#define LIMITE_21142 21342
#define FACTOR_21142 4

int aplicar_limite21142(int valor) {
    if (valor > LIMITE_21142) return LIMITE_21142;
    return valor * FACTOR_21142;
}
