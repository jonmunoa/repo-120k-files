// fichero 11162 -- macros y constantes -- MODIFICADO
#define LIMITE_11162 11362
#define FACTOR_11162 4

int aplicar_limite11162(int valor) {
    if (valor > LIMITE_11162) return LIMITE_11162;
    return valor * FACTOR_11162;
}
