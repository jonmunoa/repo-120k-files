// fichero 882 -- macros y constantes
#define LIMITE_882 982
#define FACTOR_882 3

int aplicar_limite882(int valor) {
    if (valor > LIMITE_882) return LIMITE_882;
    return valor * FACTOR_882;
}
