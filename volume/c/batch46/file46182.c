// fichero 46182 -- macros y constantes -- MODIFICADO
#define LIMITE_46182 46382
#define FACTOR_46182 4

int aplicar_limite46182(int valor) {
    if (valor > LIMITE_46182) return LIMITE_46182;
    return valor * FACTOR_46182;
}
