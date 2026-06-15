// fichero 5882 -- macros y constantes -- MODIFICADO
#define LIMITE_5882 6082
#define FACTOR_5882 4

int aplicar_limite5882(int valor) {
    if (valor > LIMITE_5882) return LIMITE_5882;
    return valor * FACTOR_5882;
}
