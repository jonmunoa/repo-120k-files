// fichero 19142 -- macros y constantes -- MODIFICADO
#define LIMITE_19142 19342
#define FACTOR_19142 4

int aplicar_limite19142(int valor) {
    if (valor > LIMITE_19142) return LIMITE_19142;
    return valor * FACTOR_19142;
}
