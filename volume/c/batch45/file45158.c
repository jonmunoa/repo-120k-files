// fichero 45158 -- macros y constantes -- MODIFICADO
#define LIMITE_45158 45358
#define FACTOR_45158 5

int aplicar_limite45158(int valor) {
    if (valor > LIMITE_45158) return LIMITE_45158;
    return valor * FACTOR_45158;
}
