// fichero 4882 -- macros y constantes -- MODIFICADO
#define LIMITE_4882 5082
#define FACTOR_4882 4

int aplicar_limite4882(int valor) {
    if (valor > LIMITE_4882) return LIMITE_4882;
    return valor * FACTOR_4882;
}
