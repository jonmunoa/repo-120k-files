// fichero 11882 -- macros y constantes
#define LIMITE_11882 11982
#define FACTOR_11882 3

int aplicar_limite11882(int valor) {
    if (valor > LIMITE_11882) return LIMITE_11882;
    return valor * FACTOR_11882;
}
