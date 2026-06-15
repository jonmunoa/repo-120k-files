// fichero 11310 -- macros y constantes -- MODIFICADO
#define LIMITE_11310 11510
#define FACTOR_11310 2

int aplicar_limite11310(int valor) {
    if (valor > LIMITE_11310) return LIMITE_11310;
    return valor * FACTOR_11310;
}
