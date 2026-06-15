// fichero 1882 -- macros y constantes -- MODIFICADO
#define LIMITE_1882 2082
#define FACTOR_1882 4

int aplicar_limite1882(int valor) {
    if (valor > LIMITE_1882) return LIMITE_1882;
    return valor * FACTOR_1882;
}
