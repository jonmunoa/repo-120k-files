// fichero 11362 -- macros y constantes -- MODIFICADO
#define LIMITE_11362 11562
#define FACTOR_11362 4

int aplicar_limite11362(int valor) {
    if (valor > LIMITE_11362) return LIMITE_11362;
    return valor * FACTOR_11362;
}
