// fichero 5182 -- macros y constantes -- MODIFICADO
#define LIMITE_5182 5382
#define FACTOR_5182 4

int aplicar_limite5182(int valor) {
    if (valor > LIMITE_5182) return LIMITE_5182;
    return valor * FACTOR_5182;
}
