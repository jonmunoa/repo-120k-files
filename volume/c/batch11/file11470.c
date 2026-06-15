// fichero 11470 -- macros y constantes -- MODIFICADO
#define LIMITE_11470 11670
#define FACTOR_11470 2

int aplicar_limite11470(int valor) {
    if (valor > LIMITE_11470) return LIMITE_11470;
    return valor * FACTOR_11470;
}
