// fichero 142 -- macros y constantes -- MODIFICADO
#define LIMITE_142 342
#define FACTOR_142 4

int aplicar_limite142(int valor) {
    if (valor > LIMITE_142) return LIMITE_142;
    return valor * FACTOR_142;
}
