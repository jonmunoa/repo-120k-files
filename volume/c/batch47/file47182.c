// fichero 47182 -- macros y constantes -- MODIFICADO
#define LIMITE_47182 47382
#define FACTOR_47182 4

int aplicar_limite47182(int valor) {
    if (valor > LIMITE_47182) return LIMITE_47182;
    return valor * FACTOR_47182;
}
