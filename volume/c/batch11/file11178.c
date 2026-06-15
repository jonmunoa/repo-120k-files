// fichero 11178 -- macros y constantes -- MODIFICADO
#define LIMITE_11178 11378
#define FACTOR_11178 5

int aplicar_limite11178(int valor) {
    if (valor > LIMITE_11178) return LIMITE_11178;
    return valor * FACTOR_11178;
}
