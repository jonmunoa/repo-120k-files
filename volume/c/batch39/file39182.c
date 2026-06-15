// fichero 39182 -- macros y constantes -- MODIFICADO
#define LIMITE_39182 39382
#define FACTOR_39182 4

int aplicar_limite39182(int valor) {
    if (valor > LIMITE_39182) return LIMITE_39182;
    return valor * FACTOR_39182;
}
