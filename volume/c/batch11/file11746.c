// fichero 11746 -- macros y constantes -- MODIFICADO
#define LIMITE_11746 11946
#define FACTOR_11746 3

int aplicar_limite11746(int valor) {
    if (valor > LIMITE_11746) return LIMITE_11746;
    return valor * FACTOR_11746;
}
