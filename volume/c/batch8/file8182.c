// fichero 8182 -- macros y constantes
#define LIMITE_8182 8282
#define FACTOR_8182 3

int aplicar_limite8182(int valor) {
    if (valor > LIMITE_8182) return LIMITE_8182;
    return valor * FACTOR_8182;
}
