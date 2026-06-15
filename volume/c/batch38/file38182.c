// fichero 38182 -- macros y constantes -- MODIFICADO
#define LIMITE_38182 38382
#define FACTOR_38182 4

int aplicar_limite38182(int valor) {
    if (valor > LIMITE_38182) return LIMITE_38182;
    return valor * FACTOR_38182;
}
