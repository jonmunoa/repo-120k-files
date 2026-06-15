// fichero 31182 -- macros y constantes -- MODIFICADO
#define LIMITE_31182 31382
#define FACTOR_31182 4

int aplicar_limite31182(int valor) {
    if (valor > LIMITE_31182) return LIMITE_31182;
    return valor * FACTOR_31182;
}
