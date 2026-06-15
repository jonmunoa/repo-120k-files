// fichero 49182 -- macros y constantes -- MODIFICADO
#define LIMITE_49182 49382
#define FACTOR_49182 4

int aplicar_limite49182(int valor) {
    if (valor > LIMITE_49182) return LIMITE_49182;
    return valor * FACTOR_49182;
}
