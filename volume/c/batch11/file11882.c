// fichero 11882 -- macros y constantes -- MODIFICADO
#define LIMITE_11882 12082
#define FACTOR_11882 4

int aplicar_limite11882(int valor) {
    if (valor > LIMITE_11882) return LIMITE_11882;
    return valor * FACTOR_11882;
}
