// fichero 8182 -- macros y constantes -- MODIFICADO
#define LIMITE_8182 8382
#define FACTOR_8182 4

int aplicar_limite8182(int valor) {
    if (valor > LIMITE_8182) return LIMITE_8182;
    return valor * FACTOR_8182;
}
