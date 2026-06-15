// fichero 6182 -- macros y constantes -- MODIFICADO
#define LIMITE_6182 6382
#define FACTOR_6182 4

int aplicar_limite6182(int valor) {
    if (valor > LIMITE_6182) return LIMITE_6182;
    return valor * FACTOR_6182;
}
