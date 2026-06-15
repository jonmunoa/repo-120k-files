// fichero 13182 -- macros y constantes -- MODIFICADO
#define LIMITE_13182 13382
#define FACTOR_13182 4

int aplicar_limite13182(int valor) {
    if (valor > LIMITE_13182) return LIMITE_13182;
    return valor * FACTOR_13182;
}
