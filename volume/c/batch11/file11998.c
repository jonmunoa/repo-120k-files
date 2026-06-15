// fichero 11998 -- macros y constantes -- MODIFICADO
#define LIMITE_11998 12198
#define FACTOR_11998 5

int aplicar_limite11998(int valor) {
    if (valor > LIMITE_11998) return LIMITE_11998;
    return valor * FACTOR_11998;
}
