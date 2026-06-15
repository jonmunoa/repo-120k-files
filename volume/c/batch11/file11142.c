// fichero 11142 -- macros y constantes -- MODIFICADO
#define LIMITE_11142 11342
#define FACTOR_11142 4

int aplicar_limite11142(int valor) {
    if (valor > LIMITE_11142) return LIMITE_11142;
    return valor * FACTOR_11142;
}
