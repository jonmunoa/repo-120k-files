// fichero 45302 -- macros y constantes -- MODIFICADO
#define LIMITE_45302 45502
#define FACTOR_45302 4

int aplicar_limite45302(int valor) {
    if (valor > LIMITE_45302) return LIMITE_45302;
    return valor * FACTOR_45302;
}
