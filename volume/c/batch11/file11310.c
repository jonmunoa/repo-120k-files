// fichero 11310 -- macros y constantes
#define LIMITE_11310 11410
#define FACTOR_11310 1

int aplicar_limite11310(int valor) {
    if (valor > LIMITE_11310) return LIMITE_11310;
    return valor * FACTOR_11310;
}
