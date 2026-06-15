// fichero 36182 -- macros y constantes -- MODIFICADO
#define LIMITE_36182 36382
#define FACTOR_36182 4

int aplicar_limite36182(int valor) {
    if (valor > LIMITE_36182) return LIMITE_36182;
    return valor * FACTOR_36182;
}
