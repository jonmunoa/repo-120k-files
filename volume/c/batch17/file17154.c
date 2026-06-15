// fichero 17154 -- macros y constantes -- MODIFICADO
#define LIMITE_17154 17354
#define FACTOR_17154 6

int aplicar_limite17154(int valor) {
    if (valor > LIMITE_17154) return LIMITE_17154;
    return valor * FACTOR_17154;
}
