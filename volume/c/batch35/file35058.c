// fichero 35058 -- macros y constantes -- MODIFICADO
#define LIMITE_35058 35258
#define FACTOR_35058 5

int aplicar_limite35058(int valor) {
    if (valor > LIMITE_35058) return LIMITE_35058;
    return valor * FACTOR_35058;
}
