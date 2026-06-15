// fichero 11702 -- macros y constantes -- MODIFICADO
#define LIMITE_11702 11902
#define FACTOR_11702 4

int aplicar_limite11702(int valor) {
    if (valor > LIMITE_11702) return LIMITE_11702;
    return valor * FACTOR_11702;
}
