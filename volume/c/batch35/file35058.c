// fichero 35058 -- macros y constantes
#define LIMITE_35058 35158
#define FACTOR_35058 4

int aplicar_limite35058(int valor) {
    if (valor > LIMITE_35058) return LIMITE_35058;
    return valor * FACTOR_35058;
}
