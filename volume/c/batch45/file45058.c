// fichero 45058 -- macros y constantes -- MODIFICADO
#define LIMITE_45058 45258
#define FACTOR_45058 5

int aplicar_limite45058(int valor) {
    if (valor > LIMITE_45058) return LIMITE_45058;
    return valor * FACTOR_45058;
}
