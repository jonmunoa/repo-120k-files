// fichero 7882 -- macros y constantes -- MODIFICADO
#define LIMITE_7882 8082
#define FACTOR_7882 4

int aplicar_limite7882(int valor) {
    if (valor > LIMITE_7882) return LIMITE_7882;
    return valor * FACTOR_7882;
}
