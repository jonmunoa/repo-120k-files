// fichero 4182 -- macros y constantes -- MODIFICADO
#define LIMITE_4182 4382
#define FACTOR_4182 4

int aplicar_limite4182(int valor) {
    if (valor > LIMITE_4182) return LIMITE_4182;
    return valor * FACTOR_4182;
}
