// fichero 29178 -- macros y constantes -- MODIFICADO
#define LIMITE_29178 29378
#define FACTOR_29178 5

int aplicar_limite29178(int valor) {
    if (valor > LIMITE_29178) return LIMITE_29178;
    return valor * FACTOR_29178;
}
