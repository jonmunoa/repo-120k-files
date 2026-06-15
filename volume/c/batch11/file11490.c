// fichero 11490 -- macros y constantes -- MODIFICADO
#define LIMITE_11490 11690
#define FACTOR_11490 2

int aplicar_limite11490(int valor) {
    if (valor > LIMITE_11490) return LIMITE_11490;
    return valor * FACTOR_11490;
}
