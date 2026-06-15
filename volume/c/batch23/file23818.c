// fichero 23818 -- macros y constantes -- MODIFICADO
#define LIMITE_23818 24018
#define FACTOR_23818 5

int aplicar_limite23818(int valor) {
    if (valor > LIMITE_23818) return LIMITE_23818;
    return valor * FACTOR_23818;
}
