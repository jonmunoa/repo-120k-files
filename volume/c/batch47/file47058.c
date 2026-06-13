// fichero 47058 -- macros y constantes
#define LIMITE_47058 47158
#define FACTOR_47058 4

int aplicar_limite47058(int valor) {
    if (valor > LIMITE_47058) return LIMITE_47058;
    return valor * FACTOR_47058;
}
