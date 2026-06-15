// fichero 4058 -- macros y constantes -- MODIFICADO
#define LIMITE_4058 4258
#define FACTOR_4058 5

int aplicar_limite4058(int valor) {
    if (valor > LIMITE_4058) return LIMITE_4058;
    return valor * FACTOR_4058;
}
