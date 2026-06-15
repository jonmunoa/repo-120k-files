// fichero 26182 -- macros y constantes -- MODIFICADO
#define LIMITE_26182 26382
#define FACTOR_26182 4

int aplicar_limite26182(int valor) {
    if (valor > LIMITE_26182) return LIMITE_26182;
    return valor * FACTOR_26182;
}
