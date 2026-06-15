// fichero 17182 -- macros y constantes -- MODIFICADO
#define LIMITE_17182 17382
#define FACTOR_17182 4

int aplicar_limite17182(int valor) {
    if (valor > LIMITE_17182) return LIMITE_17182;
    return valor * FACTOR_17182;
}
