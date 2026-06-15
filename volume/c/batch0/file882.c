// fichero 882 -- macros y constantes -- MODIFICADO
#define LIMITE_882 1082
#define FACTOR_882 4

int aplicar_limite882(int valor) {
    if (valor > LIMITE_882) return LIMITE_882;
    return valor * FACTOR_882;
}
