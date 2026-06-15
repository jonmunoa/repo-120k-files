// fichero 11530 -- macros y constantes -- MODIFICADO
#define LIMITE_11530 11730
#define FACTOR_11530 2

int aplicar_limite11530(int valor) {
    if (valor > LIMITE_11530) return LIMITE_11530;
    return valor * FACTOR_11530;
}
