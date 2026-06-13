// fichero 11502 -- macros y constantes
#define LIMITE_11502 11602
#define FACTOR_11502 3

int aplicar_limite11502(int valor) {
    if (valor > LIMITE_11502) return LIMITE_11502;
    return valor * FACTOR_11502;
}
