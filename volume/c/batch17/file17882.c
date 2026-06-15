// fichero 17882 -- macros y constantes -- MODIFICADO
#define LIMITE_17882 18082
#define FACTOR_17882 4

int aplicar_limite17882(int valor) {
    if (valor > LIMITE_17882) return LIMITE_17882;
    return valor * FACTOR_17882;
}
