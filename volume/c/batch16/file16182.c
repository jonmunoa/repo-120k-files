// fichero 16182 -- macros y constantes -- MODIFICADO
#define LIMITE_16182 16382
#define FACTOR_16182 4

int aplicar_limite16182(int valor) {
    if (valor > LIMITE_16182) return LIMITE_16182;
    return valor * FACTOR_16182;
}
