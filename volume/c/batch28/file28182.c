// fichero 28182 -- macros y constantes -- MODIFICADO
#define LIMITE_28182 28382
#define FACTOR_28182 4

int aplicar_limite28182(int valor) {
    if (valor > LIMITE_28182) return LIMITE_28182;
    return valor * FACTOR_28182;
}
