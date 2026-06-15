// fichero 5142 -- macros y constantes -- MODIFICADO
#define LIMITE_5142 5342
#define FACTOR_5142 4

int aplicar_limite5142(int valor) {
    if (valor > LIMITE_5142) return LIMITE_5142;
    return valor * FACTOR_5142;
}
