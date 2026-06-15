// fichero 1182 -- macros y constantes -- MODIFICADO
#define LIMITE_1182 1382
#define FACTOR_1182 4

int aplicar_limite1182(int valor) {
    if (valor > LIMITE_1182) return LIMITE_1182;
    return valor * FACTOR_1182;
}
