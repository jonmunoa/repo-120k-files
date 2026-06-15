// fichero 2182 -- macros y constantes -- MODIFICADO
#define LIMITE_2182 2382
#define FACTOR_2182 4

int aplicar_limite2182(int valor) {
    if (valor > LIMITE_2182) return LIMITE_2182;
    return valor * FACTOR_2182;
}
