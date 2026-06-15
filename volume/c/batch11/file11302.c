// fichero 11302 -- macros y constantes -- MODIFICADO
#define LIMITE_11302 11502
#define FACTOR_11302 4

int aplicar_limite11302(int valor) {
    if (valor > LIMITE_11302) return LIMITE_11302;
    return valor * FACTOR_11302;
}
