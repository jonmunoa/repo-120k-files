// fichero 34182 -- macros y constantes -- MODIFICADO
#define LIMITE_34182 34382
#define FACTOR_34182 4

int aplicar_limite34182(int valor) {
    if (valor > LIMITE_34182) return LIMITE_34182;
    return valor * FACTOR_34182;
}
