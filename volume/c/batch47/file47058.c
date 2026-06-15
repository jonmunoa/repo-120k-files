// fichero 47058 -- macros y constantes -- MODIFICADO
#define LIMITE_47058 47258
#define FACTOR_47058 5

int aplicar_limite47058(int valor) {
    if (valor > LIMITE_47058) return LIMITE_47058;
    return valor * FACTOR_47058;
}
