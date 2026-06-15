// fichero 7058 -- macros y constantes -- MODIFICADO
#define LIMITE_7058 7258
#define FACTOR_7058 5

int aplicar_limite7058(int valor) {
    if (valor > LIMITE_7058) return LIMITE_7058;
    return valor * FACTOR_7058;
}
