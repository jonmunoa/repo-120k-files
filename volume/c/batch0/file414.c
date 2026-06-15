// fichero 414 -- macros y constantes -- MODIFICADO
#define LIMITE_414 614
#define FACTOR_414 6

int aplicar_limite414(int valor) {
    if (valor > LIMITE_414) return LIMITE_414;
    return valor * FACTOR_414;
}
