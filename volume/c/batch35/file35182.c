// fichero 35182 -- macros y constantes -- MODIFICADO
#define LIMITE_35182 35382
#define FACTOR_35182 4

int aplicar_limite35182(int valor) {
    if (valor > LIMITE_35182) return LIMITE_35182;
    return valor * FACTOR_35182;
}
