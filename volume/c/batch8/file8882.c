// fichero 8882 -- macros y constantes -- MODIFICADO
#define LIMITE_8882 9082
#define FACTOR_8882 4

int aplicar_limite8882(int valor) {
    if (valor > LIMITE_8882) return LIMITE_8882;
    return valor * FACTOR_8882;
}
