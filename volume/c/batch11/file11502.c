// fichero 11502 -- macros y constantes -- MODIFICADO
#define LIMITE_11502 11702
#define FACTOR_11502 4

int aplicar_limite11502(int valor) {
    if (valor > LIMITE_11502) return LIMITE_11502;
    return valor * FACTOR_11502;
}
