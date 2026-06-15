// fichero 45882 -- macros y constantes -- MODIFICADO
#define LIMITE_45882 46082
#define FACTOR_45882 4

int aplicar_limite45882(int valor) {
    if (valor > LIMITE_45882) return LIMITE_45882;
    return valor * FACTOR_45882;
}
